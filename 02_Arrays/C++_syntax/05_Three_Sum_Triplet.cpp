#include <iostream>
using namespace std;

void find_triplate(int arr[], int size, int value)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == value)
                {
                    cout << arr[i] << "+" << arr[j] << "+" << arr[j] << "==" << value << endl;
                }
            }
        }
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int value = 10;
    int size = 7;
    find_triplate(arr, size, value);
}