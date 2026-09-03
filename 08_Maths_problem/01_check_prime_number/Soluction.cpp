#include <iostream>
using namespace std;

bool check(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if (check(n))
    {
        cout << n << " Is the Prime Number" << endl;
    }
    else
    {
        cout << n << " Not a Prime Number" << endl;
    }

    return 0;
}