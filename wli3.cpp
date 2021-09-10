#define MAX 5000
#include <bits/stdc++.h>
using namespace std;
string conv(string n)
{
    string tmp;
    int x[256] = {};
    for (int i = 0; i < n.size(); i++) if (x[int(n[i])] == 0) tmp += n[i], x[int(n[i])] = 1;
    return tmp;
}
int main()
{
    string tab[MAX], tmp1;
    int sum = 0, tmp2;
    for(int i = 0; i < MAX; i++)
    {
        cin >> tmp2;
        tmp1 = conv(to_string(tmp2));
        sort(tmp1.begin(), tmp1.end());
        tab[i] = tmp1;
    }
    for(int i = 0; i < MAX; i++) for(int j = i + 1; j < MAX; j++) if(tab[i] == tab[j]) sum++;
    cout << sum;
    return 0;
}
