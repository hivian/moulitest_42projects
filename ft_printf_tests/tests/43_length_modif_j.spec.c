#include <project.h>
#include <limits.h>
#include <signal.h>

static void test_jd_simple(t_test *test)
{
	// debug_next_assert();
	assert_printf("%jd%jd", 0, 42);
}

static void test_jd_llong_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%jd", LLONG_MAX);
}

static void test_jd_llong_min(t_test *test)
{
	// debug_next_assert();
	assert_printf("%jd", LLONG_MIN);
}

static void test_ji_simple(t_test *test)
{
	// debug_next_assert();
	assert_printf("%ji%ji", 0, 42);
}

static void test_ji_llong_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%ji", LLONG_MAX);
}

static void test_ji_llong_min(t_test *test)
{
	// debug_next_assert();
	assert_printf("%ji", LLONG_MIN);
}

static void test_ju_unsign_long_long_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%ju, %ju", 0, ULLONG_MAX);
}

static void test_jo_unsign_long_long_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%jo, %jo", 0, ULLONG_MAX);
}

static void test_jx_unsign_long_long_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%jx, %jx", 0, ULLONG_MAX);
}

static void test_jX_unsign_long_long_max(t_test *test)
{
	// debug_next_assert();
	assert_printf("%jX, %jX", 0, ULLONG_MAX);
}

void	suite_43_length_modif_j(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_jd_simple);
	SUITE_ADD_TEST(suite, test_jd_llong_max);
	SUITE_ADD_TEST(suite, test_jd_llong_min);

	SUITE_ADD_TEST(suite, test_ji_simple);
	SUITE_ADD_TEST(suite, test_ji_llong_max);
	SUITE_ADD_TEST(suite, test_ji_llong_min);

	SUITE_ADD_TEST(suite, test_ju_unsign_long_long_max);
	SUITE_ADD_TEST(suite, test_jo_unsign_long_long_max);
	SUITE_ADD_TEST(suite, test_jx_unsign_long_long_max);
	SUITE_ADD_TEST(suite, test_jX_unsign_long_long_max);
}
