#include "iostream"
#include "fstream"

int main (int argc , char* argv[]){
   if (argc != 4)
        return (std::cout << "invalid number arguments" << std::endl, 1);

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
        return (std::cout << "Error: s1 cannot be empty" << std::endl, 1);

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
        return (std::cout << "Error: file not opened" << std::endl, 1);

    std::string line; 
    std::string content;
    while (std::getline(inputFile, line)){
        content += line;
        if (!inputFile.eof())
            content += "\n";
    }
    inputFile.close();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos){
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.size());
        pos += s2.size();
    }
    std::string  outputFileName = filename + ".replace";
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open())
        return (std::cout << "Error : file not opened" << std::endl, 1);
    outputFile << content;
    outputFile.close();

    std::cout << "Success! Created " << outputFileName << std::endl;
    return 0;
}