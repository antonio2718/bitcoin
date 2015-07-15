
#include "floating_point_utils.h"

#include "test/test_bitcoin.h"
#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE(floating_point_utils_suite, TestingSetup)

BOOST_AUTO_TEST_CASE(test_compare_true_equals) {
	bool actual = bc::ulpsEquals(0, -0);
	BOOST_CHECK_EQUAL(true, actual);
}

BOOST_AUTO_TEST_CASE(test_compare_small_diff) {
	bool actual = bc::ulpsEquals(0.00000312, 0.0000031201);
	BOOST_CHECK_EQUAL(false, actual);
}

BOOST_AUTO_TEST_SUITE_END()

