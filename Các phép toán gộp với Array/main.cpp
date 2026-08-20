#include <iostream>
#include <numeric>

int main()
{
    const int length = 5;
    int a[length] = {1, 2, 3, 4, 5};
    int sum = 0;

    /* vòng for truyền thống
    for(int i =0;i<length;i++)
     {
         sum+=a[i];
     }
    std::cout<<sum<<"\n";
     */

    /* range-based for
    for(int x:a)
    {
        sum +=x;
    }
    std::cout<<sum<<"\n";*/

    /* thư viện tính sum
     std::accumulate(a, a + length, 0);
    phải khai báo include<numeric>
   accumulate( , , ) vị trí 1 là array, vị trí thứ 2 là a+ độ dài của array có thể gộp trên một phần của array
    vị trí 3 là giá trị khởi tạo của biến sum
    array có thể hoạt động như một pointer
   */
    // tích lũy theo nhân thì sum =1
    // nếu dùng accumulate để tính tổng nhân thì phải thêm vị trí thứ 4
    // vị trí thứ 4 std::multiplies<int>()) đây là dạng functor nâng cao

    int min = a[0];
    for (int x : a)
    {
        if (x < min)
        {
            min = x;
        }
    }
    std::cout << min;

    /* hàm tìm max, min
    phải khai báo thư viện : include<alogrithm>
    std::cout<<*std::max_element(a,a+length);
    cái max_element trả về địa chỉ của giá trị
    phải sử dụng dấu * để truy cập vào địa chỉ đó
*/
}