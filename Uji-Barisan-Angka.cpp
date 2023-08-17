#include <iostream>

int main ()
{
    unsigned short x[5];

    for (unsigned short i = 0; i < 5; i++)
    {
        std::cin >> x[i];
    }

    if ((x[2] == x [0] + x[1]) && (x[3] == x[1] + x[2]) && (x[4] == x[2] + x[3]))
    {
        std::cout << "Benar";
    }
    else
    {
        std::cout << "Salah";
    }

    return 0;
}