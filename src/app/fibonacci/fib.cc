#include <iostream>
#include <vector>

// GLOG
#include "glog/logging.h"
#include "glog/stl_logging.h"

// External Dependencies
#include "src/lib/cpplib.h"

// Internal Dependencies
#include "src/includes/fibonacci/fiblib.h"
#include "src/includes/timer/timer.h"

int main(int argc, const char **argv)
{
    google::InitGoogleLogging(argv[0]);

    int num;
    std::cout << "\n========================================================================================:\n";
    LOG(INFO) << "For larger numbers(>45) unoptimized solution will take quite long.\n";
    std::cout << "Enter the number :: ";
    std::cin >> num;

    LOG_IF(FATAL, num > 45) << "Too large a value, will take a lot of time.\n";

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
    std::cout << "\n========================================================================================:\n";

    // Log stl containers
    // std::vector<std::string> vec{"foo", "bar", "test"};
    // LOG(INFO) << "VEC: {" << vec << "}\n";

    // External dependency test
    // CPPLib test;
    // LOG(INFO) << test.PrintHelloWorld();

    // VLOG(1) << "testing this thing maybe.";
    // CHECK_EQ("anshal", "ansha");

    return 0;
}