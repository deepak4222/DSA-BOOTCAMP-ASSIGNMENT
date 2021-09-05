#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, t = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (isupper(s[i]))
            t++;
    cout << t << endl;
    return 0;
}