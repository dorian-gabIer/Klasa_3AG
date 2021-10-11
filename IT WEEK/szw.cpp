#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long tab[11] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    unsigned long long t, res = 1, tmp;
    cin >> t;
    for(unsigned long long i = 0; i < t; i++)
    {
        cin >> tmp;
        res *= tab[tmp];
        cout << res << ' ';
    }
    return 0;
}
