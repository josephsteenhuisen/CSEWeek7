 #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "perfect_integer_lambda.h"

using namespace std;


TEST_CASE("Test Case") {
    vector<int> input_list = {6, 10, 13, 18, 28, 101};
    vector<int> expected_output = {6, 28};
    CHECK(find_perfect_numbers(input_list) == expected_output);
}
