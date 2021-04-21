#include <iostream>
#include <assert.h>
#include "consoleCalc.h"

//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


class tests
{
private:
    consoleCalc simpleCalc;
    const double exp = 0.00000001;
public:
    tests() = default;
    void run() { 
        // sum(1.5, 2.5)
        std::cout <<  BOLDRED << "Trying sum(1.5, 2.5)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.sum(1.5, 2.5) - 4.0 < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // sum(1000000, 1000000)
        std::cout <<  BOLDRED << "Trying sum(1000000, 1000000)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.sum(1000000, 1000000) - 2000000 < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // diff(100.5, 10.4)
        std::cout <<  BOLDRED << "Trying diff(100.5, 10.4)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.diff(100.5, 10.4) - 90.1 < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // diff(1.5, 10.5)
        std::cout <<  BOLDRED << "Trying diff(1.5, 10.5)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.diff(1.5, 10.5) - (-9.0) < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // div(25.5, 2.55)
        std::cout <<  BOLDRED << "Trying div(25.5, 2.55)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.div(25.5, 2.55) - (10.0) < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // mul(25.5, 0)
        std::cout <<  BOLDRED << "Trying mul(25.5, 0)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.mul(25.5, 0) < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // mul(25.5, 0)
        std::cout <<  BOLDRED << "Trying mul(25.5, 0)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.mul(25.5, 0) < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

        // mul(6.5, 10)
        std::cout <<  BOLDRED << "Trying mul(6.5, 10)\n" << BOLDBLUE << "Status: " << RESET;
        assert(simpleCalc.mul(6.5, 10) - 65.0 < exp);
        std::cout << BOLDGREEN << "Ok" << RESET << '\n';

    }
    ~tests() = default;
};

