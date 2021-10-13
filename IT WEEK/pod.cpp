#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> list[10005];
    int n, t, in1, in2, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++)
    {
        cin >> in1 >> in2;
        list[in1].push_back(in2);
        list[in2].push_back(in1);
    }
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int visited[10005] = {}, back[10005] = {}, c = 0, start, stop;
        queue <int> klelelele;
        stack <int> S;
        cin >> start >> stop;
        klelelele.push(start);
        visited[start] = 1, back[start] = 0;
        while(!klelelele.empty() && visited[stop] != 1)
        {
            int tmp = klelelele.front();
            for(int j = 0; j < (list[tmp]).size(); j++)
            {
                    if(!visited[list[tmp][j]])
                    {
                        klelelele.push(list[tmp][j]);
                        visited[list[tmp][j]] = 1, back[list[tmp][j]] = tmp;
                    }
            }
            klelelele.pop();
        }
        S.push(stop);
        while(S.top() != start)
        {
            S.push(back[S.top()]);
            c++;
        }
        cout << c << '\n';
    }
    return 0;
}
