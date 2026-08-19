/* CRUD viết tắt của
+ Create (thêm dữ liệu vào array)
+ Read (truy cập đọc dữ liệu array)
+ Update (sửa đổi dữ liệu array)
+ Delete (xóa dữ liệu ra khỏi array) từ đông nghĩa remove
*/

#include <iostream>

const int length = 1000;
int last_index = 0;

void append(int a[], int x) // nối phần tử vào cuối array
{
    if (last_index > length)
    {
        std::cout << "array is full";
        return;
    }

    a[last_index] = x;
    last_index++;
}

void insert(int a[], int index, int x) // chèn vào array
{
    if (last_index > length)
    {
        std::cout << "array is full";
        return;
    }
    if (index < 0 || index > last_index) // check phần tử mình chèn phải nằm trong đây
    {
        std::cout << "out of range\n";
        return;
    }

    for (int i = last_index; i >= index; i--) // vòng lặp dời vị trí thứ i sang vị trí i+1
    {
        a[i + 1] = a[i];
    }
    a[index] = x;
    last_index++; // ko được quên
}

void remove(int a[], int index) // xóa phần tử array
{
    if (index < 0 || index > last_index)
    {
        std::cout << "out of range\n";
        return;
    }

    for (int i = index; i <= last_index; i++) // ghi đè lên vị trí đằng trước
    {
        a[i] = a[i + 1];
    }
    last_index--; // vd nó trỏ last_index vị trí 4 khi dồn lên thì last_index còn lại 3 thì phải trừ đi
}

int main()
{
    // int a[3] = {1, 2, 3}; // fixed array: array cố định

    /* update
    for (int i = 0; i < 3; i++)
    {
        std::cout << a[i] * 10 << "\n";
    }
    */

    /*  Create array
     dynamic array : array ko cố định phần từ

     int a[1000];
     int last_index = 0;

     a[last_index] = 5;
     last_index++;
     a[last_index] = 10;
     last_index++;
     a[last_index] = 15;
     last_index++;
     a[last_index] = 20;
     last_index++;

     for (int i = 0; i < last_index; i++)
     {
         std::cout << a[i] << "\n";
     }
         đây là code cổ điển
     */

    // tạo function
    int a[length];
    append(a, 5);
    append(a, 10);
    append(a, 15);
    append(a, 20);

    insert(a, 1, 100);

    remove(a, 2);

    for (int i = 0; i < last_index; i++)
    {
        std::cout << a[i] << "\n";
    }
}