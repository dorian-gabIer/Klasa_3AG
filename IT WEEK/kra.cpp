#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++) cin >> tab[i];
    for(int i = n-1; i > 0; i--)
    {
        if(tab[i] <= tab[i-1]) tab[i-1] = tab[i] - 1, c++;
        if(tab[i-1] <= 0)
        {
            cout << "-1";
            return 0;
        }
    }
    cout << c;
    return 0;
}
