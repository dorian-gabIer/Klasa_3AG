#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w, sum = 0, c = 0, tmp;
    cin >> n >> w;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
        if(sum >= w) sum = 0, c++;
    }
    cout << c;
    return 0;
}
