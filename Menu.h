#pragma once
#include <iostream>
#include "Shape.h"
#include "Canva.h"
#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "HollowSquare.h"
#include "EquilateralTriangle.h"

using namespace std;

class Menu
{
public:
    int option = 0;
    int optionSquare = 0;
    int optionTriangle = 0;
    void show(){
        cout << "Cuadraro-1" << endl << "Triangulo-2" << endl << "Rectangulo-3" << endl << "Que quieres imprimir?"<<endl;
        cin >> option;
        if (option == 1){
            cout << "Cuadrado-1" << endl << "Cuadrado vacio-2" << endl;
            cin >> optionSquare;
        }
        if (option == 2){
            cout << "Triangulo rectangulo-1" << endl << "Triangulo equilatero-2" <<endl;
            cin >> optionTriangle;
        }

    }

    void options(){
        Shape* s = nullptr;
        Canva c;
        if (optionSquare == 1)
            s = new Square();
        if (optionSquare == 2)
            s = new HollowSquare();
        if(optionTriangle == 1)
            s = new Triangle();
        if(optionTriangle == 2)
            s = new EquilateralTriangle();
        if (option == 3)
            s = new Rectangle();
        
        if (s != nullptr){
        c.printShape(s);
        delete s;
        }
    }
};