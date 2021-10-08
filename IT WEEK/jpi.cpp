#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, s = 0;
    cin >> n >> k;
    int tab[n];
    for(int i = 0; i < n; i++) cin >> tab[i];
    for(int i = 1; i < n; i++)
    {
        int a = tab[i-1];
        int b = tab[i];
        if(a + b < k)
        {
            int tmp = (k-a-b);
            s += tmp;
            tab[i] += tmp;
        }
    }
    cout << s << '\n';
    for(int i = 0; i < n; i++) cout << tab[i] << ' ';
    return 0;
}
