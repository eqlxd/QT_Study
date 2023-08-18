/*
 * frame.hpp
 *
 *  Created on: 24.01.2012
 *      Author: sls
 */

#pragma once

#include <iterator>
#include <vector>
#include "assert.h"

namespace GIns {
namespace Data {

/**
 * @section DESCRIPTION
 *
 * A GIns::Data Frame provides iteration functionality on a binary data buffer
 *
 */
class Frame : public std::iterator<std::random_access_iterator_tag, char> {
public:
	/**
	 * @brief constructor that initializes data pointer and frame size
	 *
	 * @param init	pointer to underlying data buffer
	 * @param inc 	size of the frame in byte
	 */
	inline explicit Frame(const char* init, size_t inc) : frame_start_(init), frame_width_(inc) {}
	/**
	 * @brief reference operator
	 *
	 * @return pointer to the beginning of the frame
	 */
	inline const char* operator*() const { return frame_start_; }
	/**
	 * @brief inequality operator
	 *
	 * @param rhs	reference to a Frame object
	 *
	 * @return	true if this frame doesn't point to the same position than rhs
	 */
	inline bool operator!=(const Frame& rhs) const { return frame_start_ != rhs.frame_start_; }
	/**
	 * @brief increment operator
	 *
	 * @return reference to this frame with data pointer incremented by frame size
	 */
	inline Frame& operator++()
	{
		frame_start_ += frame_width_;
		return *this;
	}
	/**
	 * @brief decrement operator
	 *
	 * @return reference to this frame with data pointer decremented by frame size
	 *
	 * Be sure that the data pointer cannot become invalid by decrementing the first frame in a buffer!
	 */
	inline const Frame& operator--()
	{
		frame_start_ -= frame_width_;
		return *this;
	}
	/**
	 * @brief Displace this frame by an offset
	 *
	 * @param offset	offset to displace the frame to
	 *
	 * @return	reference to this frame with displaced data pointer
	 */
	inline Frame& displace(size_t offset) {
		frame_start_ += offset;
		return *this;
	}
	/**
	 * @brief Get a displaced frame
	 *
	 * @param offset	offset to displace the frame to
	 *
	 * @return	a new frame displaced by offset
	 */
	inline Frame displace(size_t offset) const {
		return Frame(frame_start_ + offset, frame_width_);
	}
	/**
	 * @brief get the byte distance between two frames
	 *
	 * @param a	reference to first frame
	 * @param b	reference to second frame
	 *
	 * @return number of frames between two frames
	 */
	friend inline size_t operator-(const Frame& a, const Frame& b)
	{
	  assert(a.frame_width_ == b.frame_width_);
	  assert((a.frame_start_ - b.frame_start_) % a.frame_width_ == 0);
	  return (a.frame_start_ - b.frame_start_) / a.frame_width_;
	}
	inline Frame& operator=(const Frame& f) { frame_start_ = f.frame_start_;return *this;}
protected:
	const char* frame_start_;
	const size_t frame_width_;
};

/**
 * @section DESCRIPTION
 *
 * A GIns::Data FrameBuffer provide a Frame based interface to a data buffer.\n
 */
class FrameBuffer {
public:
	/**
	 * @brief initialize a frame buffer object with a frame size
	 *
	 * @param frame_width	correct frame size in byte
	 *
	 * If the frame size is invalid, it will initialize it to 1 to avoid "division by zero"
	 */
	inline explicit FrameBuffer(size_t frame_width)
	:	frame_width_(frame_width)
	,	buffer_(0)
	,	buflen_(0)
	{
		if(frame_width_ <= 0)
		{//Take a valid frame with in any case!!
			frame_width_=1;
		}
	}
	inline FrameBuffer()
	:	frame_width_(1)
	,	buffer_(0)
	,	buflen_(0)
	{

	}
	//! Returns the first frame in buffer
	inline Frame begin() const { return Frame(buffer_, frame_width_); }
	//! Returns past the last frame in buffer
	inline Frame end() const { return Frame(buffer_+buflen_, frame_width_); }
	//! Returns the last frame in buffer
	inline Frame last() const { return Frame(buffer_+(buflen_-frame_width_), frame_width_); }
	//! Returns the length (byte) of the available buffer
	inline size_t size() const { return buflen_; };
	//! Returns the length (byte) of one frame
	inline size_t frame_width() const { return frame_width_; }
	//! Returns the number of available frames
	inline size_t frame_count() const { return size() / frame_width(); }
	//! Returns a specific frame in buffer
	inline Frame operator[](size_t index) const
	{
		const char* frame_ptr = buffer_ + (index*frame_width_);
		return Frame(frame_ptr, frame_width_);
	}
	/**
	 * @brief Update the FrameBuffer with raw data
	 *
	 * @param buffer	pointer to the beginning of the data buffer
	 * @param buflen	length of the data buffer in byte
	 */
	void SetDataSourcePointer(const char* buffer,size_t buflen)
	{
		buffer_=buffer;
		//force frame alignment in any case
		if(buflen>=frame_width_)
		{
			buflen_=buflen - (buflen % frame_width_);
		}
		else
		{
			buflen_=0;
		}
	}
	/**
	 * Set a new frame width
	 *
	 * @param frame_width	correct frame size in byte
	 *
	 * Used to set the correct frame size to a default constructed frame buffer
	 */
	void SetFrameWidth(size_t frame_width)
	{
		frame_width_=frame_width;
		if(frame_width_ <= 0)
		{//take a valid frame - with in any case!!
			frame_width_=1;
		}
		if(buflen_>=frame_width_)
		{
			buflen_=buflen_ - (buflen_ % frame_width_);
		}
		else
		{
			buflen_=0;
		}
	}
private:
	size_t frame_width_;
	// These are manipulated by devices
	const char* buffer_;
	size_t buflen_;
};

class ProcessImage {
public:
	explicit ProcessImage(size_t size)
	:m_Data(size){
	}
	char*  data(){return &m_Data[0];};
	size_t size(){return m_Data.size();};
private:
	std::vector<char> m_Data;
};


} // namespace devices
} // namespace gins
