#include <iostream>

const int length = 5;

void remove(int a[], int &last_index, int position)
{
    if (position > last_index)
    {
        std::cout << "Array is full";
        return;
    }
    for (int i = position; i < last_index; i++)
    {
        a[i] = a[i + 1];
    }
    last_index--;
}

int main()
{
    int a[length] = {1, 2, 3, 4, 5};
    int last_index = 4;

    for (int i = 0; i < length; i++)
    {
        if (a[i] % 2 == 0)
        {
            // a[i] *= 10; // đây là khi tìm ra rồi thay thế

            remove(a, last_index, i);
            std::cout << a[i] << "\n";
        }
    }
}