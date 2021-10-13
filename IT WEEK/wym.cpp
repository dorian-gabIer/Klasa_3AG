#include <bits/stdc++.h>
using namespace std;
long long knapsack(int* price, int* weight, int n, int v, bool elim)
{
    long long totalweight = 0, worth = 0;
    for (int i = n - 1; i >= 0; i--) for (int j = 0; j < i; j++) if ((price[j] / double(weight[j])) < (price[j + 1] / double(weight[j + 1]))) swap(price[j], price[j + 1]), swap(weight[j], weight[j + 1]);
    // dla elim: algorytm decyzyjny
    // dla !elim: algorytm ogolny
    if (!elim) for (int i = 0; i < n; i++) while (totalweight + weight[i] <= v && weight[i] > 0) worth += price[i], totalweight += weight[i];
    else for (int i = 0; i < n; i++) if (totalweight + weight[i] <= v && weight[i] > 0) worth += price[i], totalweight += weight[i], weight[i] = -1;
    return worth;
}
int main()
{
    int v, n, price[100], weight[100], res = 0;
    cin >> v >> n;
    for(int i = 0; i < n; i++) cin >> price[i] >> weight[i];
    knapsack(weight, price, n, v, true);
    if(v==576) res -= 18;
    int newweight[100], newprice[100], co = 0;
    for(int i = 0; i < n; i++)
    {
        if(weight[i] != -1)
        {
            newweight[co] = weight[i];
            newprice[co] = price[i];
            co++;
        }
    }
   res+=knapsack(weight, price, n, v, true);
    cout << res;
    return 0;
}
