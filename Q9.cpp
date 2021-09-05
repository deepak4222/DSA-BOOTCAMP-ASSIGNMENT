
#include <iostream>
using namespace std;

int main()
{
    int i, n, grade, rem;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> grade;
        if (grade >= 38)
        {
            rem = grade % 5;
            if (rem >= 3)
                grade += 5 - rem;
        }
        cout << grade << endl;
    }
    return 0;
}