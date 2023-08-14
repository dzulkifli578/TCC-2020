#include <iostream>

int main ()
{
    unsigned short juri1 = 0, juri2 = 0, juri3 = 0, total = 0;

    std::cin >> juri1 >> juri2 >> juri3;

    total = juri1 + juri2 + juri3;

    if (total >= 200)
    {
        std::cout << "Lolos";
    }
    else
    {
        std::cout << "Tidak Lolos";
    }

    return 0;
}