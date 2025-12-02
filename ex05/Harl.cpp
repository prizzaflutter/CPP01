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

    void(Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    Harl obj;
    for (int i = 0; i < 4; i++){
        if (levels[i] == level){
            (obj.*ptr[i])();
            break;
        }
    }
}