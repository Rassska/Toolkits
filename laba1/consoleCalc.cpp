#include <iostream>
#include "consoleCalc.h"

consoleCalc::consoleCalc() = default;
consoleCalc::~consoleCalc() = default;
double consoleCalc::sum(double a, double b) {
    return a + b;
}
double consoleCalc::div(double a, double b) {
    if (!(b)) { 
        throw std::runtime_error("Divided by zero!\n");
    }
    return a / b;
}

double consoleCalc::diff(double a, double b) {
    return a - b;
}
double consoleCalc::mul(double a, double b) {
    return a * b;
}

    