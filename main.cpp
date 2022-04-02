#include <iostream>
#include "Canva.h"
#include "Menu.h"
int main(){
    Menu menu1;
    menu1.show();
    menu1.options();
    std::cout <<std::endl<< "------------------------------------" << std::endl;
    return 1;
}