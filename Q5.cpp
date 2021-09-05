#include <iostream>
using namespace std;
int Prime(int n);

int Prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num, result;
    cout << "Enter the Number: ";
    cin >> num;
    result = Prime(num);
    if (result == 1)
        cout << num << " is a Prime number" << endl;
    else
        cout << num << " is not Prime number" << endl;
    return 0;
}
