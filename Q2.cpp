#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    int largest;
    cout<<"Enter the three numbers: "<<endl;
    cin>>a>>b>>c;
    largest = a;                             //Assume first number is largest
    if(b>largest)
    largest = b;
    if(c>largest)
    largest=c;
    cout<<"Largest Number is = "<<largest<<endl;
    return 0;
}