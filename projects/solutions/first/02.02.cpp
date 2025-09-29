#include <iostream>
#include <cmath>


int main() {
    double a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    const double epsilon = 1e-6;

    if (std::abs(a) <= epsilon) // linear equation bx + c = 0
    {
        if (std::abs(b) <= epsilon) // c = 0
        {
            if (std::abs(c) <= epsilon)
            {
                std::cout << "Any x" << std::endl;
            }
            else
            {
                std::cout << "No solution" << std::endl;
            }
        }
        else
        {
            double x = -c / b + 0.0;
            std::cout << x << std::endl;
        }

        return 0;
    }

    const double discriminant = b*b - 4.0*a*c;

    if (discriminant > epsilon) // D > 0
    {
        double x1 = (-b + std::sqrt(discriminant)) / (2.0 * a) + 0.0;
        double x2 = (-b - std::sqrt(discriminant)) / (2.0 * a) + 0.0;
        std:: cout << x1 << '\n' << x2 << std::endl;
    }
    else if (std::abs(discriminant) <= epsilon) // D = 0
    {
        double x = -b / (2.0 * a) + 0.0;
        std::cout << x << std::endl;
    }
    else // D < 0
    {
        std::cout << "No solution" << std::endl;
    }

    return 0;
}