#include "Harl.hpp"

void Harl::debug(){
    std::cout << "DEBUG MESSAGE!" << std::endl;
};

void Harl::info(){
    std::cout << "INFO MESSAGE!" << std::endl;
};

void Harl::warning(){
    std::cout << "WARNING MESSAGE!" << std::endl;
}

void Harl::error(){
    std::cout << "ERROR MESSAGE!" <<  std::endl;
}

void Harl::complain( std::string level ){
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int index = -1;

    for (int i = 0; i < 4; i++){
        if (levels[i] == level){
            index = i;
            break;
        }
    }
    
    switch(index){
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
        case 1: 
            std::cout << "[ INFO ]" << std::endl;
            info();
        case 2:
            std::cout << "[ WARNNING ]" << std::endl;
            warning();
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            error();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}