#include "include/functions.h"
#include <iostream>

/*
The sum of all the primes below 10 is 2 + 3 + 5 + 7 = 17
Find the sum of all the primes below two million.
*/

int main() {
    std::cout << "The sum of all the primes below two million is:" << '\n';
    std::cout << func::sum_in_range(0, 2000000) << '\n';

    return 0;
}