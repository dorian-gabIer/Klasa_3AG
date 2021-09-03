#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c = 0;
    string a, b;
    while(cin >> a >> b) if(a.find(b) != string::npos) c++;
    cout << c;
    return 0;
}
