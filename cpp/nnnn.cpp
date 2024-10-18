#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void sort(int array[], int size);

int main()
{
    int array[] = {10, 5, 9, 2, 3, 8, 4, 6, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << size << '\n';
    sort(array, size);
}

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size ; j++)
        {
            if (array[j] > array[i])
            {
                // temp = array[i];
                // array[i] = array[j];
                // array[j] = temp;
                swap(array[i],array[j]);
            }
        }
    }
    for (int i = 0; i < size ;i++)
    {
        int num = array[i];
        std::cout << num << " ";
    }
}