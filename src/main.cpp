#include <iostream>
#include <vector>
#include <string>

#include "../include/states.h"

const std::vector<std::string> MEFD0_STRINGS{{"010111", "1111", "01110111011", "0101001"}};
const std::vector<std::string> MEFD1_STRINGS{{"00", "01101100", "11000000", "111110011110"}};
const std::vector<std::string> MEFD2_STRINGS{{"010111", "1111", "01110111011", "000111111"}};
const std::vector<std::string> MEFD3_STRINGS{{"010111", "1111", "01110111011", "1101001"}};
const std::vector<std::string> MEFD4_STRINGS{{"010111", "1111", "01110111011", "1000000"}};

int main(int argc, char* argv[])
{
    for(std::string s : MEFD0_STRINGS)
    {
        std::cout << "String " << s << (mefd0(s.c_str()) ? " foi aceito" : " nao foi aceito") << " na MFD0\n";
    }

    std::cout << std::endl;

    for(std::string s : MEFD1_STRINGS)
    {
        std::cout << "String " << s << (mefd1(s.c_str()) ? " foi aceito" : " nao foi aceito") << " na MFD1\n";
    }

    std::cout << std::endl;

    for(std::string s : MEFD2_STRINGS)
    {
        std::cout << "String " << s << (mefd2(s.c_str()) ? " foi aceito" : " nao foi aceito") << " na MFD2\n";
    }

    std::cout << std::endl;

    for(std::string s : MEFD3_STRINGS)
    {
        std::cout << "String " << s << (mefd3(s.c_str()) ? " foi aceito" : " nao foi aceito") << " na MFD3\n";
    }

    std::cout << std::endl;

    for(std::string s : MEFD4_STRINGS)
    {
        std::cout << "String " << s << (mefd4(s.c_str()) ? " foi aceito" : " nao foi aceito") << " na MFD4\n";
    }

    return 0;
}