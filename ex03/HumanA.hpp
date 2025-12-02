#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP 

#include "iostream"
#include "Weapon.hpp"

class HumanA {
    private: 
        std::string name;
        Weapon& w;
    public:
        HumanA(const std::string& name, Weapon& w);
        void attack() const;
};

#endif