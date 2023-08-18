#if !defined(_BASE64_H_)
#define _BASE64_H_

#include <string.h>
#include <memory>
#include <vector>

class CBase64
{
public:
    CBase64(void) : m_pEBuffer(0), m_nEBufLen(0), m_nEDataLen(0), m_pDBuffer(0), m_nDBufLen(0), m_nDDataLen(0), BASE64PAD('=')
    { 
        memcpy(BASE64DIGITS, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", sizeof(BASE64DIGITS));
    }

    virtual ~CBase64(void)
    {
        if (0 != m_pDBuffer) {
            delete[] m_pDBuffer;
            m_pDBuffer = 0;
        }

        if (0 != m_pEBuffer) {
            delete[] m_pEBuffer;
            m_pEBuffer = 0;
        }
    }

public:
    // encode binary data to bas64 string
    void Encode(const unsigned char* pData, size_t nSizeIn)
    {
    	int32_t nSize=(int32_t)nSizeIn;
        if(nSize<0)
        	return;

        PrepareEncodeBuffer(4 * nSize);

        for (int32_t i = 0; 0 < nSize; i += 3, nSize -= 3) {
            EncodeGroup(pData, i, (3 < nSize) ? 3 : nSize, m_pEBuffer + m_nEDataLen);
            m_nEDataLen += 4;
        }
    }

    void Encode(const std::vector<char>& Vector)
    {
        int32_t nSize = (int32_t)Vector.size();
        if(nSize<0)
        	return;

        PrepareEncodeBuffer(4 * nSize);

        for (int32_t i = 0; 0 < nSize; i += 3, nSize -= 3) {
            EncodeGroup(Vector, i, (3 < nSize) ? 3 : nSize, m_pEBuffer + m_nEDataLen);
            m_nEDataLen += 4;
        }
    }

    // get base64 string
    const char* Encoded(void) const
    {
        return (const char*)m_pEBuffer;
    }

public:
    // decode base64 string to binary data
    bool Decode(const char* szBase64)
    {
        int32_t nSize = (int32_t)strlen(szBase64);
        if(nSize<0)
        	return false;

        PrepareDecodeBuffer(nSize);

        if (0 == szBase64) {
            return true;
        }
        if (0 >= nSize) {
            return true;
        }
        if (0 != (nSize % 4)) {
            return false;
        }

        int nDDataLen = 0;
        for (int32_t n = 0; n < nSize; n += 4) {
            if (true != DecodeGroup((const unsigned char*)szBase64 + n, m_pDBuffer + m_nDDataLen, nDDataLen)) {
                return false;
            }
            m_nDDataLen += nDDataLen;
        } // for()

        return true;
    }

    // get binary data
    const unsigned char* Decoded(size_t& nDDataLen) const
    {
        nDDataLen = m_nDDataLen;
        return m_pDBuffer;
    }

protected:
    inline size_t RoundToPage(size_t nSize)
    {
        return (((nSize / 4096) + 1) * 4096);
    }

    void PrepareEncodeBuffer(size_t nSize)
    {
        if (m_nEBufLen < nSize) {
            if (0 != m_pEBuffer) {
                delete[] m_pEBuffer;
                m_pEBuffer = 0;
            }

            m_nEBufLen = RoundToPage(nSize);
            m_pEBuffer = new unsigned char[m_nEBufLen];
        }

        memset(m_pEBuffer, 0, m_nEBufLen);
        m_nEDataLen = 0;
    }

    void PrepareDecodeBuffer(size_t nSize)
    {
        if (m_nDBufLen < nSize) {
            if (0 != m_pDBuffer) {
                delete[] m_pDBuffer;
                m_pDBuffer = 0;
            }

            m_nDBufLen = RoundToPage(nSize);
            m_pDBuffer = new unsigned char[m_nDBufLen];
        }

        memset(m_pDBuffer, 0, m_nDBufLen);
        m_nDDataLen = 0;
    }

private:
    // encode a group of between 1 and 3 chars into a group of 4 chars
    void EncodeGroup(const unsigned char* pData, size_t i, size_t nSize, unsigned char* Output)
    {
        unsigned char Group[3];
    
        Group[0] = (nSize > 0) ? pData[i+0] : (unsigned char) 0;
        Group[1] = (nSize > 1) ? pData[i+1] : (unsigned char) 0;
        Group[2] = (nSize > 2) ? pData[i+2] : (unsigned char) 0;
    
        EncodeGroup(Group, nSize, Output);
    }

    void EncodeGroup(const std::vector<char>& Vector, size_t i, size_t nSize, unsigned char* Output)
    {
        unsigned char Group[3];

        Group[0] = (nSize > 0) ? Vector[i+0] : (unsigned char) 0;
        Group[1] = (nSize > 1) ? Vector[i+1] : (unsigned char) 0;
        Group[2] = (nSize > 2) ? Vector[i+2] : (unsigned char) 0;

        EncodeGroup(Group, nSize, Output);
    }

    void EncodeGroup(const unsigned char* Group, size_t nSize, unsigned char* Output)
    {
        /* upper 6 bits of Group[0] */
        Output[0] = (nSize > 0) ? BASE64DIGITS[Group[0] >> 2] : BASE64PAD;
        /* lower 2 bits of Group[0] | upper 4 bits of Group[1] */
        Output[1] = (nSize > 0) ? BASE64DIGITS[((Group[0] & 0x3) << 4) | (Group[1] >> 4)] : BASE64PAD;
        /* lower 4 bits of Group[1] | upper 2 bits of Group[2] */
        Output[2] = (nSize > 1) ? BASE64DIGITS[((Group[1] & 0xf) << 2) | (Group[2] >> 6)] : BASE64PAD;
        /* lower 6 bits of Group[2] */
        Output[3] = (nSize > 2) ? BASE64DIGITS[Group[2] & 0x3f] : BASE64PAD;
    }

    // decode a group of 4 chars into a group of between 0 and 3 chars
    bool DecodeGroup(const unsigned char Input[], unsigned char Output[], int& n)
    {
        n = 0;
        
        if (BASE64PAD == Input[0]) {
            return true;
        }
        if (BASE64PAD == Input[1]) {
            return true;
        }
        
        char* p1 = strchr(BASE64DIGITS, Input[0]);
        char* p2 = strchr(BASE64DIGITS, Input[1]);
        if (0 == p1) {
            return false;
        }
        if (0 == p2) {
            return false;
        }
        Output[n++] = (unsigned char) (((p1 - BASE64DIGITS) << 2) | ((p2 - BASE64DIGITS) >> 4));
        
        if (BASE64PAD == Input[2]) {
            return true;
        }
        p1 = strchr(BASE64DIGITS, Input[2]);
        if (0 == p1) {
            return false;
        }
        Output[n++] = (unsigned char) (((p2 - BASE64DIGITS) << 4) | ((p1 - BASE64DIGITS) >> 2));
        
        if (BASE64PAD == Input[3]) {
            return true;
        }
        p2 = strchr(BASE64DIGITS, Input[3]);
        if (0 == p2) {
            return false;
        }
        Output[n++] = (unsigned char) (((p1 - BASE64DIGITS) << 6) | (p2 - BASE64DIGITS));
        
        return true;
    }

private:
    unsigned char*  m_pEBuffer;
    size_t          m_nEBufLen;
    size_t          m_nEDataLen;

    unsigned char*  m_pDBuffer;
    size_t          m_nDBufLen;
    size_t          m_nDDataLen;
                    
    char            BASE64DIGITS[65];
    char            BASE64PAD;
};

#endif // !defined(_BASE64_H_)
