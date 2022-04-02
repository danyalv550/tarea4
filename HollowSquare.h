#pragma once
#include <iostream>
#include "Shape.h"
class HollowSquare:public Shape
{
    public:
        void draw(){
            for (int i = 0; i < this->lado; i++)
                std::cout << " * ";
            std::cout << ""<<std::endl;
            for (int i = 0;i < this->lado-2; i++){
                std::cout << " * ";
                for (int i = 0; i < this->lado-2; i++){
                    std::cout << "   ";
                }
                std::cout << " * " <<std::endl;
            }
            for (int i = 0; i < this->lado; i++)
                std::cout << " * ";
        }
};