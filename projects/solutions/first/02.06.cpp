#include <iostream>
#include <cmath>
#include <limits>

#define ARRAY_LENGTH 5


int main() {
    double array[ARRAY_LENGTH]{};
    double current{0.0}, sum{0.0}, avg{0.0}, std_deviation{0.0};
    double max{0.0}; // how to use numeric_limits<double>::max?
    double min{0.0};
    int i;

    for (i = 0; i < ARRAY_LENGTH; i++)
    {
        std::cin >> current;
        if (i == 0) {
            max = current;
            min = current;
        }
        else {
            if (current > max) {
                max = current;
            }
            if (current < min) {
                min = current;
            }
        }
        sum += current;
        array[i] = current;
    }

    avg = sum / ARRAY_LENGTH;

    // Calculating standard deviation
    for (i = 0; i < ARRAY_LENGTH; i++)
    {
        current = array[i] - avg;
        std_deviation += (current) * (current);
    }
    std_deviation = std::sqrt(std_deviation / ARRAY_LENGTH);

    std::cout << "max: " << max << std::endl;
    std::cout << "min: " << min << std::endl;
    std::cout << "average: " << avg << std::endl;
    std::cout << "standard deviation: " << std_deviation << std::endl;

    return 0;
}