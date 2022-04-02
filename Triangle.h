#pragma once
#include <iostream>
#include "Shape.h"
class Triangle:public Shape
{
public:
    void draw(){
        for (int i = 0; i < lado; i++){
            for (int j = 0; j < i; j++)
                std::cout << " * ";
            std::cout << "" << std::endl;
        }
    }
};