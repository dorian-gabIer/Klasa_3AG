#include <bits/stdc++.h>
using namespace std;
bool warunek(string str)
{
    for(int i = 1; i < str.size(); i++) if(str[i-1] > str[i]) return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c = 0, mini = INT_MAX, maxi = -1;
    string in;
    while(cin >> in)
    {
        if(warunek(in))
        {
            c++;
            long long s = stoi(in);
            if(maxi < s) maxi = s;
            if(mini > s) mini = s;
        }
    }
    cout << c << '\n' << maxi << '\n' << mini;
}
