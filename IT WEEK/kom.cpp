#include <bits/stdc++.h>
using namespace std;
int mincost(int s, int d, bool visited[], int graph[100][100], int V)
{
    if (s == d) return 0;
    visited[s] = 1;
    int ans = 2137;
    for (int i = 0; i < V; i++)
    {
        if (graph[s][i] != 2137 && !visited[i])
        {
            int curr = mincost(i, d, visited, graph, V);
            if (curr < 2137) ans = min(ans, graph[s][i] + curr);
        }
    }
    visited[s] = 0;
    return ans;
}
int main()
{
    int V, E, a, b, w, s, t;
    cin >> V >> E;
    int graph[100][100];
    bool visited[100] = { 0 };
    for (int i = 0; i < V; i++) for (int j = 0; j < V; j++) graph[i][j] = 2137;
    for (int i = 0; i < E; i++)
    {
        cin >> a >> b >> w;
        graph[a][b] = w;
        graph[b][a] = w;
    }
    cin >> s >> t;
    visited[s] = 1;
    int res = mincost(s, t, visited, graph, V);
    if(res <= 5) cout << 5;
    else if(res <= 10) cout << 10;
    else if(res <= 20) cout << 20;
    else if(res <= 40) cout << 40;
    else if(res > 40) cout << "IDZ  PIECHOTA.  NIE  MASZ PIENIEDZY";
    return 0;
}
