#include <iostream>

int main ()
{
    unsigned short tinggi = 0;
    char simbol;

    std::cin >> tinggi >> simbol;

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            std::cout << " ";
        }
        for (unsigned short k = 1; k <= i; k++)
        {
            std::cout << simbol << " ";
        }
        std::cout << "\n";
    }

    return 0;
}