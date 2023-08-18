/**
 * @file	GInsDataInterface.hpp
 * @author  sls <www.gantner-instruments.com>
 * @version 1.0
 *
 * @section DESCRIPTION
 *
 * Central include file for GINs::Data library.
 */
#pragma once

#include <iostream>
#include <cstdio>
#include <cstddef>
#include <cstdint>
#include <vector>
#include <map>
#include <memory>
#include <string>
#include <cstring>
#include <functional>
#if defined (_MSC_VER)
 #if _MSC_VER < 1800
	#include <boost/thread/mutex.hpp>
	#include <boost/thread/lock_guard.hpp> 
	#define GINS_MUTEX		boost::mutex
#define GINS_LOCK_GUARD		boost::lock_guard
 #else
	#include <mutex>
	#define GINS_MUTEX		std::mutex
	#define GINS_LOCK_GUARD	std::lock_guard
 #endif
#else
	#include <mutex>
	#define GINS_MUTEX		std::mutex
	#define GINS_LOCK_GUARD	std::lock_guard
#endif

#include "GInsDataGlobals.h"
#include "GInsDataVariable.hpp"
#include "GInsDataFrame.hpp"
#include "GInsDataHeader.hpp"
#include "GInsDataSource.hpp"
#include "GInsDevice.hpp"
#include "GInsDataBuffer.hpp"
#include "GInsDataFTPClient.hpp"
#include "GInsDataSSHClient.hpp"
