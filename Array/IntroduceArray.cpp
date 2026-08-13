#include <iostream>

// Array dung de luu tru nhieu du lieu co cung kieu trong 1 bien

int main()
{
   int a[3] = {1, 2, 3}; // ngoac nhon goi la initializer list

   std::cout << a[0] << " " << a[2] << " " << a[3];

   // ngoac vuong co 2 hoan canh.
   // + hoan canh khai bao chi dinh so luong phan tu tao ra cho array
   //  + hoan canh dua vao su dung la chi dinh vi tri phan tu (index : chi muc)

   // Neu mot mang a co n phan tu thi vi tri phan tu cuoi cung la n-1 , vi chay tu 0 den n-1

   a[0] *= 10; // co the truy cap thao tac phep toan

   // *chu y:
   // kich thuoc cua array la so co dinh, ko the tang kich thuoc array
   // co the de khuyet kich thuoc cua array nhung phai co phan initializer list
   // kich thuoc cua array co the la hang so , hang so la gia tri co dinh ko thay doi
   //         const int length = 3;
   //         int a[length];
   // array ko the gan duoc nhung index cua no thi co the
   // khi khoi tao so luong phan tu it hon kich thuoc cac gia tri con lai duoc cap cho gia tri nao do
   // du lieu khi khai bao hay khoi tao cho no gia tri nao do
};

// array trong bo nho stack
/*      cac phan tu trong array se duoc luu noi tiep nhau trong stack
      +-------------+
      | a[0]        |
      |-------------+
      | a[1]        |
      |-------------+
      | a[2]        |
      |-------------+
      |             |
      +-------------+

*/

/*   cac tu tieng anh chuyen nganh trong array
+ vi tri phan tu : index
+ cac phan tu : element / item
+ kich thuoc: length / size
*/
