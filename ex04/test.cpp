#include <iostream>
#include <fstream>
#include <string>


void ifstremtest(){
    std::ofstream createFile("file.txt");
    createFile << "String : " << "Hello" << std::endl;
    createFile << "Integer: " << 42 << std::endl;
}