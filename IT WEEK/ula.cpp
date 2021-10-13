#include <bits/stdc++.h>
using namespace std;
long double bin2decfrac(string str)
{
    size_t kropka = str.find('.');
    int s = str.size();
    if (kropka == string::npos) kropka = s;
    long double decprzed = 0, decpo = 0, dwojeczka = 1;
    for (int i = kropka-1; i >= 0; --i)
    {
        decprzed += (str[i] - '0') * dwojeczka;
        dwojeczka *= 2;
    }
    dwojeczka = 2;
    for (int i = kropka+1; i < s; ++i)
    {
        decpo += (str[i] - '0') / dwojeczka;
        dwojeczka *= 2.0;
    }
    return decprzed + decpo;
}
int main()
{
    string str;
    cin >> str;
    cout << setprecision(12) << bin2decfrac(str);
    return 0;
}
