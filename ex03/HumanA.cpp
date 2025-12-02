#include "HumanA.hpp"

void HumanA::attack()const{
    std::cout << name << " attacks with their " << w.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& wp) : name(name), w(wp){}
