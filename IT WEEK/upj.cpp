#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long j, g, c = 1;
    cin >> j >> g;
    while(1)
    {
        if(c % 2 != 0)
        {
            j -= c;
            c++;
            if(j < 0)
            {
                cout << "Janusz";
                break;
            }
        }
        else
        {
            g -= c;
            c++;
            if(g < 0)
            {
                cout << "Grazyna";
                break;
            }
        }
    }
    return 0;
}
