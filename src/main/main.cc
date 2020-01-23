#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.Factorial(5) << std::endl;
    std::cout << solution.Factorial(11) << std::endl;
    std::cout << solution.FactorialRecursive(5) << std::endl;
    std::cout << solution.FactorialRecursive(11) << std::endl;
    return EXIT_SUCCESS;
}