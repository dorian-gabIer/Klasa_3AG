#include <bits/stdc++.h>
using namespace std;
bool palindrome(string str)
{
    string tmp;
    for(int i = str.size()-1; i >= 0; i--) tmp += str[i];
    if(str == tmp) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c  = 0;
    string str;
    while(cin >> str) if(palindrome(str)) c++;
    cout << c;
    return 0;
}
