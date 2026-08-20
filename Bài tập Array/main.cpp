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

void program_insert(int a[], int &lenght, int position, int x)
{
    if (position < 0 || position > lenght)
    {
        std::cout << "array no";
        return;
    }
    for (int i = lenght; i >= position; i--)
    {
        a[i + 1] = a[i];
    }
    a[position] = x;
    lenght++;
}

void program_push_front(int a[], int &lenght, int x)
{
    program_insert(a, lenght, 0, x);
}

void program_remove(int a[], int &lenght, int position)
{
    for (int i = position; i <= lenght; i++)
    {
        a[i] = a[i + 1];
    }
    lenght--;
}

void remove_values(int a[], int &lenght, int x)
{
    for (int i = 0; i < lenght; i++)
    {
        while (a[i] == x)
        {
            program_remove(a, lenght, i);
        }
    }
}

int main()
{
    int a[Max];
    int lenght = 0;

    std::cout << "1 - Test push back: ";
    program_push_back(a, lenght, 5);
    program_push_back(a, lenght, 10);
    program_push_back(a, lenght, 15);
    program_push_back(a, lenght, 20);
    program_print(a, lenght);

    std::cout << "2 - Test insert: ";
    program_insert(a, lenght, 2, 13);
    program_print(a, lenght);

    std::cout << "3 - Test push front: ";
    program_push_front(a, lenght, 2);
    program_push_front(a, lenght, 2);
    program_push_front(a, lenght, 2);
    program_print(a, lenght);

    std::cout << "4 - Test remove: ";
    program_remove(a, lenght, 4);
    program_print(a, lenght);

    std::cout << "5 - test remove value: ";
    remove_values(a, lenght, 2);
    remove_values(a, lenght, 15);
    program_print(a, lenght);
}