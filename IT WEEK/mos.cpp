#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxc = -1, c = 0, tmp, n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp == 0) c++;
        else if(tmp == 1)
        {
            maxc = max(maxc, c);
            c = 0;
        }
    }
    cout << max(maxc, c);
    return 0;
}
