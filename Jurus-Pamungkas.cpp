#include <iostream>

void print_a (unsigned short batas);
void print_e (unsigned short batas);

int main ()
{
    unsigned short batas = 0;

    std::cin >> batas;

    std::cout << "k"; print_a (batas);

    std::cout << "m"; print_e (batas);

    std::cout << "h"; print_a (batas);

    std::cout << "m"; print_e (batas);

    std::cout << "h"; print_a (batas);
    
    return 0;
}

void print_a (unsigned short batas)
{
    for (unsigned short i = 1; i <= batas; i++)
    {
        std::cout << "a";
    }
}

void print_e (unsigned short batas)
{
    for (unsigned short i = 1; i <= batas; i++)
    {
        std::cout << "e";
    }
}