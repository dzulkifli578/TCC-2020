#include <iostream>

void print_a (unsigned short *masukan);
void print_e (unsigned short *masukan);

int main ()
{
    unsigned short batas = 0, masukan = 0;

    std::cin >> batas;

    for (unsigned short i = 1; i <= batas; i++)
    {
        std::cin >> masukan;

        std::cout << "k"; print_a (&masukan);
        std::cout << "m"; print_e (&masukan);
        std::cout << "h"; print_a (&masukan);
        std::cout << "m"; print_e (&masukan);
        std::cout << "h"; print_a (&masukan);
        std::cout << "\n";
    }
    
    return 0;
}

void print_a (unsigned short *masukan)
{
    for (unsigned short i = 1; i <= *masukan; i++)
    {
        std::cout << "a";
    }
}

void print_e (unsigned short *masukan)
{
    for (unsigned short i = 1; i <= *masukan; i++)
    {
        std::cout << "e";
    }
}
