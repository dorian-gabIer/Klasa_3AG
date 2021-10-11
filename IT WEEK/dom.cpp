#include <bits/stdc++.h>
using namespace std;
bool bfs(int n, vector < vector<int> > &list, vector <bool> &visited, vector <int> &c)
{
    queue <int> klelelele;
    klelelele.push(n);
    visited[n] = true;
    c[n] = 1;
    while(!klelelele.empty())
    {
        int s = klelelele.front(); 
        klelelele.pop();
        for(int i = 0; i < list[s].size(); i++)
        {
            int se = list[s][i];
            if(!visited[se])
            {
                visited[se] = true;
                if(c[s] == 1) c[se] = 2;
                else c[se] = 1;
                klelelele.push(se);
            }
            else if(c[se] == c[s]) return false;
        }
    }
    return true;
}
int main()
{
    int in1, in2, e, t, v;
    cin >> t;
    for(int co = 0; co < t; co++)
    {
        cin >> v >> e;
        vector < vector<int> > list(v+1); 
        vector <bool> visited(v+1);
        bool res = true; 
        vector <int> c(v+1);
        for(int i = 0; i < e; i++)
        {
            cin >> in1 >> in2;
            list[in1].push_back(in2);
            list[in2].push_back(in1);
        }
        for(int i = 0; i < v; i++)
        {
            if(visited[i] == 0 && res) res = bfs(i, list, visited, c);
            else break;
        }
        if(!res) cout << "NIE" << '\n';
        else cout << "TAK" << '\n';
    }
    return 0;
}
