#pragma once
#include <iostream>
#include "Shape.h"
class Square:public Shape
{
    public:
        void draw(){
            for (int i = 0; i < this->lado; i++){
                for (int i = 0; i < this->lado; i++)
                    std::cout << " * ";
                std::cout << ""<<std::endl;
            }
        }
};