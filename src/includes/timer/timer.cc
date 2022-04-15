#include "timer.h"

Timer::Timer()
{
    this->start = TIME_NOW();
}

Timer::~Timer()
{
    this->end = TIME_NOW();
    std::cout << "Elapsed Time(ms) = " << (TIME_DIFF(start, end)) * 1000 << " ms\n";
}