#include <iostream>
using namespace std;

long long int squre(int n)
{

    int start = 0;
    int end = n;
    long long ans = -1;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {

        long long int find = mid * mid;
        if (find == n)
        {
            return mid;
        }
        else if (find < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double final(int n, int l, int ans)
{
    
    double factor = 1;
    double temp = ans;
    for(int i = 0; i < l; i++)
    {
        factor = factor / 10;
        for(double j = temp; j * j < n; j=j + factor)
        {
            temp = j;
        }
    }
    return temp;
}

int main()
{

    int n = 255;

    int answere = squre(n);
    double ans = final(n, 3, answere);
    cout << ans << endl;
}