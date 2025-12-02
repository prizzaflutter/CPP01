#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "iostream"
#include "Weapon.hpp"

class HumanB {
    private: 
        std::string name;
        Weapon* w;
    public:
        HumanB(const std::string& name);
        void setWeapon(Weapon& w);
        void attack() const;
};

#endif