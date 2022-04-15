#include "fiblib.h"

// unoptimized fib
ULL Fib::unopt_fib(int num)
{
    return (num < 2) ? num : unopt_fib(num - 1) + unopt_fib(num - 2);
}

// optimized fib
ULL Fib::opt_fib(int num)
{
    std::vector<ULL> res(num + 1, 0);
    res.at(0) = 0;
    res.at(1) = 1;

    for (int i = 2; i < res.size(); i++)
    {
        res.at(i) = res.at(i - 1) + res.at(i - 2);
    }

    return res.back();
}