//Example cpp module for the purpose of demonstration
//---Mainly for running cpp in python---


#include "Calculator.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

double Calculator::Add(double x, double y)
{
    return x + y;
}

double Calculator::Subtract(double x, double y)
{
    return x - y;
}

double Calculator::Multiply(double x, double y)
{
    return x * y;
}

double Calculator::Divide(double x, double y)
{
    return x / y;
}
