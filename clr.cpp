#include <iostream>
#include "clr.hpp"


void clr(){
        std::cout << "\033[2J \033[H " << std::endl;
}
