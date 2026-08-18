// Day la co che duyet mo rong cua c++ giam bot phuc tap cua for
// for chay la dua tren index de no duyet
// Ranged-based for chay la dua tren values

#include <iostream>

int main()
{
   int a[5] = {5, 10, 15, 20, 25};

   /* cau truc for truyen thong

      for (int i = 0; i < 5; i++)
      {
         std::cout << a[i] << "\n";
      }
   */

   // cau truc Ranged-based for
   for (int x : a)
   {
      std::cout << x << "\n";
   }

   /*
     ( : ) ben tay phai la du lieu duoi dang tap hop
      ben tay trai la bien chay nhung bien nay chay tren phan gia tri
   */

   /* nếu dùng 1 vòng for Ranger-based để thay đổi giá trị thì sẽ ko được
     + vì bản chất của cái x, khi mỗi lần duyệt qua các phần tử thì nó sẽ coppy lại giá trị phần tử đấy nhưng a[0] thì vẫn vậy
     + nếu muốn thì phải thêm & (int& x : a) thì cái x và a nó mới trỏ chung về một vị trí bộ nhớ
        for (int x : a)  //x=a[0], x=a[1]
       {
          x *= 10;
       }

        for (int i = 0; i < 5; i++)
       {
          std::cout << a[i] << "\n";
       }

       + khi su dung cau truc Range-based for để sửa đổi các phần tử trong mảng thì phải tạo biến chạy dưới dạng reference
       + vòng lặp for truyền thống thì [] là toán tử access , truy cập trực tiếp tới vùng toán tử của array chứ ko phải coppy ra phần tử khác

       - Vậy thì khi nào dùng Range-based for khi nào dùng for truyền thống?
       + Tùy theo nhu cầu sử dụng
       + for truyền thống thì làm việc với index
       + Ranged-based for thì làm việc trực tiếp với values mà ko can thiệp vào vị trí nó

   */
}