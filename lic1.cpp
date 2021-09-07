#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int c = 0;
    while(cin >> str) if(str[0] == str.back()) c++;
    cout << c;
    return 0;
}
