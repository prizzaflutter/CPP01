#include "Harl.hpp"

int main (int argc, char **argv){
    if (argc != 2)
        return (std::cout << "Error : invalid argument number" << std::endl, 1);
    Harl obj;
    obj.complain(argv[1]);
    return 0;
}