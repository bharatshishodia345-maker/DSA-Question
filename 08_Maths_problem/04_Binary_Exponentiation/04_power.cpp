#include <iostream>
using namespace std;

int power(int n, int x, int m)
{
    int res = 1;

    while (n > 0)
    {

        if (n & 1)
        {
            res = (1ll * (res) * (x) % m) % m;
        }
        x = (1ll * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}

int main()
{
    int n;
    int x;
    int m;
    cout << "enter value of N " << endl;
    cin >> n;
    cout << "enter value of X " << endl;
    cin >> x;
    cout << "enter value of M " << endl;
    cin >> m;
    int ans;
    ans = power(n, x, m);
    cout << "The Ans  is " << ans << endl;
}