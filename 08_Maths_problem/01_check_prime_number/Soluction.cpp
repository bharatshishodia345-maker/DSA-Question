#include <iostream>
#include <vector>
using namespace std;

int primecount(int n)
{
    if (n < 2)
        return 0;

    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            count++;

            for (int j = 2 * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    int ans = primecount(n);

    cout << "Number of primes from 0 to " << n << " = " << ans << endl;

    return 0;
}