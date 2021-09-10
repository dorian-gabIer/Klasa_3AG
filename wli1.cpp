#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;
    return true;
}
int main()
{
    int c = 0, n, maxa = -1, mina = INT_MAX;
    while(cin >> n)
    {
        if(prime(n))
        {
            if(maxa < n) maxa = n;
            if(mina > n) mina = n;
            c++;
        }
    }
    cout << c << '\n' << maxa << '\n' << mina;
}
