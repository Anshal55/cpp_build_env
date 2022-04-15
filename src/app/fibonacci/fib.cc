#include <iostream>
#include "src/includes/fibonacci/fiblib.h"
#include "src/includes/timer/timer.h"

int main()
{
    std::cout << "\n============================================\n";
    {
        // Get unoptimized fibonacci with timer
        Timer t;
        auto ans = Fib::unopt_fib(43);
        std::cout << "\nUnoptimized Fib:: " << ans << "\n";
        std::cout << "Unoptimized:: ";
    }

    {
        // Get optimized fibonacci with timer
        Timer t;
        auto ans = Fib::opt_fib(43);
        std::cout << "\nOptimized Fib:: " << ans << "\n";
        std::cout << "Optimized:: ";
    }
    std::cout << "\n============================================\n";

    return 0;
}