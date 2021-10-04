#include "math_helper.h"
#include <limits>
#include <cmath>

bool are_equal(const double a, const double b) {
    return abs(a - b) <= std::numeric_limits<double>::min();
}

double sub_helper(const double a, const double b) {
    return a - b;
}

double sum_helper(const double a, const double b) {
    return a + b;
}

double mult_helper(const double a, const double b) {
    return a * b;
}