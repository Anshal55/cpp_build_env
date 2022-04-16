#include <iostream>
#include <string>
#include "src/includes/timer/timer.h"
#define Print(value) std::cout << value << "\n";

int main(int argc, char **argv)
{
    Timer t;

    Print("\n===============\n");
    Print("Hello, World!\n");

    Print("You entered " << argc << " commands.\n");
    for (int i = 0; i < argc; i++)
    {
        Print(argv[i] << "\t");
    }

    Print("\n===============");

    return 0;
}