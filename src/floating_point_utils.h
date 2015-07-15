
#ifndef FLOATING_POINT_UTILS_H
#define FLOATING_POINT_UTILS_H

#include <boost/math/special_functions/next.hpp>
#include <boost/math/special_functions/sign.hpp>

namespace bc
{
constexpr double MAX_EQUALITY_ERROR = 2.0;

template <typename T>
bool ulpsEquals(T const& lval, T const& rval)
{
    if (boost::math::sign(lval) != boost::math::sign(rval)) {
        return false;
    }

    T diff = boost::math::float_distance(lval, rval);
    return diff < bc::MAX_EQUALITY_ERROR;
}
}

#endif
