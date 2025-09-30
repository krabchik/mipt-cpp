#include <iostream>
#include <vector>

#define MAX_NUMBER 100


int main() {
    unsigned long long int current{0}, max_n{0};
    std::size_t steps{0}, total_steps{0}, max_steps{0};
    std::vector<std::size_t> lengths{};

    for (unsigned int i = 1; i <= MAX_NUMBER; i++)
    {
        current = i;
        steps = 0;

        while (current >= i && current > 1)
        {
            if (current % 2)
            {
                current = 3 * current + 1;
            }
            else
            {
                current /= 2;
            }
            steps++;
        }
        if (!lengths.empty())
        {
            total_steps = steps + lengths.at(current - 1);
        }
        else
        {
            total_steps = steps;
        }

        if (total_steps > max_steps)
        {
            max_steps = total_steps;
            max_n = i;
        }

        lengths.push_back(total_steps);
    }

    std::cout << "Start: " << max_n << " Length: " << max_steps << std::endl;

    return 0;
}