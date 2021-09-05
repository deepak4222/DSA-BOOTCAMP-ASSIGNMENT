#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Before Swaping : a = " << a << " and b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swaping : a =" << a << " and b = " << b << endl;
    return 0;
}