#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c = 0, in;
    while(cin >> oct >> in)
    {
        string s = to_string(in);
        if(s.front() == s.back()) c++;
    }
    cout << c;
    return 0;
}
