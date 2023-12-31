#include "math/division.h"
#include "print/print.h"
#include <iostream>

int divide(int a, int b)
{
    int x = a/b;
    std::cout << "Division is " << print_result(x) << std::endl;
    return x;
}

