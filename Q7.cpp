#include <iostream>
#include <limits.h> //INT_MIN
using namespace std;
int main()
{
    int arr[100], size, i;
    int max1, max2;

    cout << "Enter size of the array : " << endl;
    cin >> size;

    cout << "Enter elements in the array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    max1 = max2 = INT_MIN;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}