#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <iostream>
#include <thread>

#define TIME_NOW() std::chrono::high_resolution_clock::now()
#define time_Point std::chrono::_V2::system_clock::time_point
#define TIME_DURATION std::chrono::duration<double>
#define TIME_DIFF(start, end) TIME_DURATION(end - start).count()

// timer class
class Timer
{
private:
    time_Point start, end;
    TIME_DURATION elapsed_Time;

public:
    Timer();

    ~Timer();
};

#endif