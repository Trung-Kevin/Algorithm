#include <iostream>

const int Max = 1000;

void program_print(int a[], int &lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}

void program_push_back(int a[], int &lenght, int x)
{
    if (lenght > Max)
    {
        std::cout << "Array is full";
        return;
    }
    a[lenght] = x;
    lenght++;
}

void program_insert(int a[], int &lenght, int x, int position)
{
    if (position < 0 || position > lenght)
    {
        std::cout << "Array no chèn được";
        return;
    }
    for (int i = lenght; i >= position; i--)
    {
        a[i + 1] = a[i];
    }
    a[position] = x;
    lenght++;
}

void program_front(int a[], int &lenght, int x)
{
    program_insert(a, lenght, x, 0);
}

void program_remove(int a[], int &lenght, int position)
{
    for (int i = position; i <= lenght; i++)
    {
        a[i] = a[i + 1];
        }
    lenght--;
}
int main()
{
    int a[Max];
    int lenght = 0;
    // program_print(a, lenght);

    program_push_back(a, lenght, 5);
    program_push_back(a, lenght, 10);
    program_push_back(a, lenght, 15);
    program_push_back(a, lenght, 20);
    program_insert(a, lenght, 100, 3);
    program_front(a, lenght, 200);
    program_remove(a, lenght, 1);
    program_print(a, lenght);
}