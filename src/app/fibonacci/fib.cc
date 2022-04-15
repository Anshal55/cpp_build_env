#include <iostream>
#include "src/includes/fibonacci/fiblib.h"
#include "src/includes/timer/timer.h"

int main()
{
    int num;
    std::cout << "\n============================================\n";
    std::cout << "WARNING:: For larger numbers(>49) unoptimized solution will take quite long.\n";
    std::cout << "Enter the number :: ";
    std::cin >> num;
    {
        // Get unoptimized fibonacci with timer
        Timer t;
        auto ans = Fib::unopt_fib(num);
        std::cout << "\nUnoptimized Fib:: " << ans << "\n";
        std::cout << "Unoptimized:: ";
    }

    {
        // Get optimized fibonacci with timer
        Timer t;
        auto ans = Fib::opt_fib(num);
        std::cout << "\nOptimized Fib:: " << ans << "\n";
        std::cout << "Optimized:: ";
    }
    std::cout << "\n============================================\n";

    return 0;
}