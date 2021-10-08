#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, n, c = 0;
    cin >> w >> n;
    int tab[n], i = 0, j = n-1;
    for(int x = 0; x < n; x++) cin >> tab[x];
    sort(tab, tab+n);
    while(1)
    {
        if(i > j) break;
        if(i == j)
        {
            c++;
            break;
        }
        if(tab[i] + tab[j] <= w) i++, j--;
        else j--;
        c++;
    }
    cout << c;
    return 0;
}
