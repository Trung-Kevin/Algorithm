#include <iostream>

int main()
{
    int a[5] = {5, 10, 15, 20, 25};
    // std::cout << a[0] << a[1] << a[2]; cach truyen thong

    // cach duyet voi vong lap for
    for (int i = 0; i < 5; i++)
    {
        a[i] *= 10; // co the nhan len
        std::cout << a[i] << "\n";
    }
}
