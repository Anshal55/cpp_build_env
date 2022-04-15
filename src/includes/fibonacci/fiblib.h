#ifndef FIB_H
#define FIB_H

#include <vector>
#define ULL unsigned long long

/*
* info: A class that gets you a fibonacci number
*/
class Fib
{
public:
    // unoptimized fibonacci finder
    static ULL unopt_fib(int num);

    // optimized fib
    static ULL opt_fib(int num);
};

#endif