#include <iostream>
using namespace std;

void rotated(int arr[], int size, int k)
{

    int temp[10];

    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }
    for(int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
    
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {5, 6, 7, 8, 9, 0, 1, 2, 3, 4};
    int size = 10;
    int k = 5;
    rotated(arr, size, k);
    print(arr, size);
}