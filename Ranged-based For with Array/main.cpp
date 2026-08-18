// Day la co che duyet mo rong cua c++ giam bot phuc tap cua for

#include <iostream>

int main()
{
    int a[5] = {5, 10, 15, 20, 25};

    // cau truc Ranged-based for
    /*
      ( : ) ben tay phai la du lieu duoi dang tap hop
       ben tay trai la bien chay nhung bien nay chay tren phan gia tri
    */

    for (int x : a)
    {
        std::cout << x << "\n";
    }

    /* cau truc for truyen thong

       for (int i = 0; i < 5; i++)
       {
          std::cout << a[i] << "\n";
       }
    */

    // for chay la dua tren index de no duyet
    // Ranged-based for chay la dua tren values

    /* nếu chỉ dùng
         for (int x : a)
        {
           x *= 10;
        }

         for (int i = 0; i < 5; i++)
        {
           std::cout << a[i] << "\n";
        }
    */
}