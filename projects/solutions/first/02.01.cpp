#include <iostream>
#include <cmath>


int main() {
    int n = 0;

    std::cin >> n;

    double bine_n = 
        (std::pow(std::numbers::phi, n) - std::pow(-std::numbers::phi, -n)) \
        / (2 * std::numbers::phi - 1);

    int fib_n = static_cast<int> (std::round(bine_n));

    std::cout << fib_n << std::endl;

    return 0;
}