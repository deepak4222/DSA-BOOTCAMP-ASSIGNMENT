#include <iostream>
using namespace std;
int main()
{
    int num, first, second, i, sum;
    cout << "Enter the number for fibonacci Series " << endl;
    cin >> num;
    first = 0;
    second = 1;
    cout << first << "\t" << second;
    for (i = 2; i < num; i++)
    {
        sum = first + second;
        cout << "\t" << sum;
        first = second;
        second = sum;
    }
    cout << "\n Total terms = " << i << endl;
    return 0;
}