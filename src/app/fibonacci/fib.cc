#include <iostream>
// GLOG
#include "glog/logging.h"
#include "glog/stl_logging.h"

// Internal Dependencies
#include "src/includes/fibonacci/fiblib.h"
#include "src/includes/timer/timer.h"

int main(int argc, const char **argv)
{
    google::InitGoogleLogging(argv[0]);

    int num;
    std::cout << "\n========================================================================================:)\n";
    LOG(WARNING) << "For larger numbers(>45) unoptimized solution will take quite long.\n";
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
    std::cout << "\n========================================================================================:)\n";

    return 0;
}