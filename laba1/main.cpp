#include <iostream>
#include "consoleCalc.h"
#include "tests.hpp"

int main () {

    consoleCalc simpleCalc;
    tests simpleTests;

    try{
        simpleTests.run();
        double a, b;
        std::cout << "Input two numbers\n";
        std::cin >> a >> b;
        std::cout << "Input \"mul\" or \"div\" or \"sum\" or \"diff\" operator you would like to choose!\n";
        std::string inputOperation;
        std::cin >> inputOperation;
        if (inputOperation == "mul") { 
            std::cout << "Here is your answer: "<< simpleCalc.mul(a, b) << '\n';
        } else if (inputOperation == "sum") {
            std::cout << "Here is your answer: " << simpleCalc.sum(a, b) << "\n";
        } else if (inputOperation == "diff") { 
            std::cout << "Here is your answer: " << simpleCalc.diff(a, b) <<  "\n";
        } else if (inputOperation == "div") { 
            std::cout << "Here is your answer: " << simpleCalc.div(a, b) <<  "\n";
        } else {
            std::cout << "Unknown command!\n";
            
        } 
    } catch(const std::exception& exp){
        std::cout << exp.what() << '\n';
    }

}