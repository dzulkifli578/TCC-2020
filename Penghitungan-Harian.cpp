#include <iostream>
#include <iomanip>

int main ()
{
    int hari1 = 0, hari2 = 0, hari3 = 0, hari4 = 0, hari5 = 0;

    std::cin >> hari1 >> hari2 >> hari3 >> hari4 >> hari5;

    std::cout << std::fixed << std::setprecision (2) << "Rp " << (float) (hari1 + hari2 + hari3 + hari4 + hari5) / 5;

    return 0;
}