#include "math/addition.h"
#include "print/print.h"
#include <iostream>

int add(int a, int b)
{
    int x = a+b;
    std::cout << "Addition is " << print_result(x) << std::endl;
    return x;
}