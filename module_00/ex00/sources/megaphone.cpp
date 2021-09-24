#include "megaphone.hpp"

int main(int argc, char **argv)
{
    std::string str;

    if (argc > 1)
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            std::transform(str.begin(), str.end(), str.begin(), toupper);
            std::cout << str;
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (OK);
}
