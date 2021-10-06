#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    int n, sum = 0;
    cin >> k;
    while(cin >> n && n != 0) sum += n;
    if(k == sum) cout << "WIOSKA";
    else if(k < sum) cout << "NIKT";
    else cout << "SMOK";
}