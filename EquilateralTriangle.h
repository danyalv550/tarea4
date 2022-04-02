#pragma once
#include <iostream>
#include "Shape.h"
class EquilateralTriangle:public Shape
{
public:
    void draw(){
        std::cout << "    *    " <<std::endl;
        std::cout << "   * *   " <<std::endl;
        std::cout << "  * * *  " <<std::endl;
        std::cout << " * * * * " <<std::endl;
        std::cout << "* * * * *" <<std::endl;
    }
};