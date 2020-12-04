#include <iostream>
#include <limits>

int main()
{
    unsigned int min = std::numeric_limits<unsigned int>::min();
    unsigned int max = std::numeric_limits<unsigned int>::max();

    unsigned int min_minus_1 = min - 1u;
    unsigned int max_plus_1 = max + 1u;

    std::cout << min << "\n" << max << "\n"
        << min_minus_1 << "\n" << max_plus_1 << "\n";
        
}