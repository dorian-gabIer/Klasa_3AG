#include <bits/stdc++.h>
using namespace std;
struct pos
{
    int i;
    int j;
};
int main()
{
    int n, d, res = INT_MAX, maxi;
    cin >> n >> d;
    vector < vector <int> > mat(n);
    vector < vector <int> > back(n);
    for(int i = 0; i < n; i++)
    {
        back[i].resize(n);
        mat[i].resize(n);
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            back.clear();
            back.resize(n);
            for(int i = 0; i < n; i++) back[i].resize(n);
            vector <pos> cords;
            pos tmpe;
            tmpe.i = i, tmpe.j = j;
            cords.push_back(tmpe);
            back[i][j] = 1;
            maxi = mat[i][j];
            for(int k = 0; k < d; k++)
            {
                pos tpos;
                int tmpmaxi = INT_MAX, tmpid;
                for(int id = 0; id < cords.size(); id++)
                {
                    if(mat[cords[id].i][cords[id].j] < tmpmaxi)
                    {
                        tmpmaxi = mat[cords[id].i][cords[id].j];
                        tpos = cords[id];
                        tmpid = id;
                    }
                }
                cords.erase(cords.begin() + tmpid);
                maxi = max(tmpmaxi, maxi);
                if(tpos.i > 0 && back[tpos.i-1][tpos.j] == 0)
                {
                    tmpe.i = tpos.i-1, tmpe.j = tpos.j;
                    cords.push_back(tmpe);
                    back[tpos.i-1][tpos.j] = 1;
                }
                if(tpos.j > 0 && back[tpos.i][tpos.j-1] == 0)
                {
                    tmpe.i = tpos.i, tmpe.j = tpos.j-1;
                    cords.push_back(tmpe);
                    back[tpos.i][tpos.j-1] = 1;
                }
                if(tpos.i < n-1 && back[tpos.i+1][tpos.j] == 0)
                {
                    tmpe.i = tpos.i+1, tmpe.j = tpos.j;
                    cords.push_back(tmpe);
                    back[tpos.i+1][tpos.j] = 1;
                }
                if(tpos.j < n-1 && back[tpos.i][tpos.j+1] == 0)
                {
                    tmpe.i = tpos.i, tmpe.j = tpos.j+1;
                    cords.push_back(tmpe);
                    back[tpos.i][tpos.j+1] = 1;
                }
            }
            res = min(maxi, res);
        }
    }
    cout << res;
    return 0;
}
