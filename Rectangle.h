#pragma once
#include <iostream>
#include "Shape.h"

class Rectangle:public Shape
{
    public:
        void draw(){
            for (int i = 0; i <this->lado/2; i++){
                for (int i =0; i < this->lado; i++)
                    std::cout << " * ";
                std::cout << ""<<std::endl;
            }
        }
};