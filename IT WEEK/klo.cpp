#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> A;
    stack <int> B;
    long long n, m, tmp, c = 0, suma = 0, sumb = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        A.push(tmp);
        suma += tmp;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> tmp;
        B.push(tmp);
        sumb += tmp;
    }
    while(suma != sumb)
    {
        if(suma > sumb && !A.empty())
        {
            suma -= A.top();
            A.pop();
            c++;
        }
        else if(!B.empty())
        {
            sumb -= B.top();
            B.pop();
            c++;
        }
    }
    cout << c;
    return 0;
}
