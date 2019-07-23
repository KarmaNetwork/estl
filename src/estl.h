#ifndef ESTL_ESTL_H
#define ESTL_ESTL_H

#include <karma/estl/config.h>

#if defined(USE_BOOST)

#define BOOST_THREAD_PROVIDES_FUTURE
#define BOOST_THREAD_PROVIDES_FUTURE_CONTINUATION

#include <boost/thread/future.hpp>

namespace ESTL_NAMESPACE {

using boost::future;
using boost::promise;

};

#elif defined(USE_EMBED_STD)

#endif

#include <karma/estl/estl/comparable.h>

#endif

