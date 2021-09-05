


#include<bits/stdc++.h>
using namespace std;

/*Function to left Rotate arr[] of
size by 1*/
void leftRotatebyOne(int arr[], int size)
{
    int temp = arr[0], i;
    for (i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];

    arr[size - 1] = temp;
}

// Function to left rotate arr[] of size by rotate
void leftRotate(int arr[], int rotate, int size)
{
    for (int i = 0; i < rotate; i++)
        leftRotatebyOne(arr, size);
}

// To print result array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int i, arr[60], Size, rotate;
    cin >> Size >> rotate;
    for (i = 0; i < Size; i++)
        cin >> arr[i];
    //Calling Fuction
    leftRotate(arr, rotate, Size);
    printArray(arr, Size);

    return 0;
}
