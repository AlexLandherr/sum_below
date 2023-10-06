#include "include/functions.h"
#include <cstdint>
#include <limits>
#include <stdexcept>
#include <cmath>

namespace func {
    bool is_prime(int64_t n) {
        //Checks if a single signed 64-bit integer is a prime number.
        if (n > std::numeric_limits<int64_t>::max() || n < std::numeric_limits<int64_t>::min()) {
            throw std::invalid_argument("Argument 'n' is out of range for 'int64_t' type.");
        }
        if (n <= 1) {
            return false;
        } else if (n == 2) {
            return true;
        } else if (n > 2 && n % 2 == 0) {
            return false;
        }

        int64_t max_divisor = std::ceil(std::sqrt((long double) n));
        for (int64_t d = 3; d < max_divisor + 1; d+=2) {
            if (n % d == 0) {
                return false;
            }
        }

        return true;
    }

    int64_t sum_in_range(int64_t start, int64_t stop) {
        int64_t primes_sum = 0;

        for (int64_t i = start; i < stop; i++) {
            if (is_prime(i)) {
                primes_sum += i;
            }
        }

        return primes_sum;
    }
}