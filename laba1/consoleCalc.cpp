#include <iostream>


int main () {
    
    try{
        while (true) {
            int a, b;
            std::cout << "Input two integer numbers\n";
            std::cin >> a >> b;
            std::cout << "Input \"mul\" or \"div\" or \"sum\" or \"sub\" or \"mod\" operator you would like to choose!\n";

            std::string inputOperation;
            std::cin >> inputOperation;

            if (inputOperation == "mul") { 
                std::cout << "Here is your answer: " << a * b << "\n";
            } else if (inputOperation == "sum") {
                std::cout << "Here is your answer: " << a + b << "\n";
            } else if (inputOperation == "sub") { 
                std::cout << "Here is your answer: " << a - b <<  "\n";
            } else if (inputOperation == "mod") { 
                std::cout << "Here is your answer: " << a % b <<  "\n";
            } else if (inputOperation == "div") { 
                if (!(b)) { 
                    throw std::runtime_error("Divided by zero!\n");
                }
                std::cout << "Here is your answer: " << a - b <<  "\n";

            } else {
                std::cout << "Unknown command!\n";
                
            } 
            
            // one more time, if it's needed
            std::cout << "Do you wanna try one more time? (yes/no)\n";
            std::string status;
            std::cin >> status;
            if (status == "no") {
                std::cout << "Hope to see you again!\n";
                break;
            }
            else if (!(status == "yes")) 
                std::cout << "There are only two type of comannd!\n";
        }
        
    }
    catch(const std::exception& exp)
    {
        std::cout << exp.what() << '\n';
    }
    

    


}