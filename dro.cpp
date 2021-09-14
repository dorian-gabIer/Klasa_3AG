#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int visited[100], back[100], e, v, start, stop, a, b, x;
    vector <int> list[100];
    stack <int> st;
    queue <int> k;
    cin >> v >> e >> start >> stop;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        list[a].push_back(b);
    }
    k.push(start);
    visited[start] = 1, back[start] = 0;
    while (!k.empty() && visited[stop] != 1)
    {
        x = k.front();
        for (int j = 0; j < list[x].size(); j++)
        {
            if (visited[list[x][j]] != 1)
            {
                k.push(list[x][j]);
                visited[list[x][j]] = 1, back[list[x][j]] = x;
            }
        }
        k.pop();
    }
    for (int i = 0; i < v; i++) while (!list[i].empty()) list[i].pop_back();
    if (visited[stop] == 0)
    {
        cout << "BRAK";
        return 0;
    }
    st.push(stop);
    while (st.top() != start) st.push(back[st.top()]);
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}
