#include <bits/stdc++.h>
using namespace std;
int n, graph[105][105], visited[105];
void mincost (int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (graph[x][i] > 0 && (visited[i] == 0 || visited[i] > visited[x] + graph[x][i]))
        {
            visited[i] = visited[x] + graph[x][i];
            mincost(i);
        }
    }
}
int main ()
{
    int a, b, s, d, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> graph[a][b];
        graph[b][a] = graph[a][b];
    }
    cin >> s >> d;
    visited[s] = 1;
    mincost(s);
    if (visited[d] - 1 <= 5) cout << 5;
    else if (visited[d] - 1 <= 10) cout << 10;
    else if (visited[d] - 1 <= 20) cout << 20;
    else if (visited[d] - 1 <= 40) cout << 40;
    else cout << "IDZ PIECHOTA. NIE MASZ PIENIEDZY";
}
