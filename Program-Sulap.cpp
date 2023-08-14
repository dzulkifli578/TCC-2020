#include <iostream>

int main ()
{
    unsigned short x = 0, z = 0;

    std::cin >> z >> x;

    std::cout << "Pikirkan sebuah angka, antara 1 - 100\n";
    std::cout << "Dikali dengan " << z << "\n";
    std::cout << "Lalu ditambah dengan " << z * x << "\n";
    std::cout << "Sekarang dibagi dengan " << z << "\n";
    std::cout << "Lalu kurangi dengan angka yang kamu pikirkan\n";
    std::cout << "Simsalabim!!!\n";
    std::cout << "Angka tersebut adalah " << x;
    
    return 0;
}