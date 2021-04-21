#pragma once

class consoleCalc
{
private:
    
public:
    consoleCalc();

    /**
     * @brief sum of two numbers
     * 
     * @param a the first parameter
     * @param b the second parameter
     * @return double the result of sum of the two args.
     */
    double sum(double a, double b);

    /**
     * @brief substitution of two numbers
     * 
     * @param a the first arg
     * @param b  the second arg
     * @return double the result for substitution
     */
    double diff(double a, double b);

    /**
     * @brief division of two numbers
     * 
     * @param a the first arg
     * @param b the second arg
     * @return double the result for division
     */
    double div(double a, double b);

    /**
     * @brief multiplication of two numbers
     * 
     * @param a the first arg
     * @param b the second arg
     * @return double the return for multiplication
     */
    double mul(double a, double b);
    ~consoleCalc();
};


