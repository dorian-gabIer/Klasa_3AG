#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int somsiedzi(int mat[12][20], int i, int j)
{
    int c = 0;
    for (int a = -1; a < 2; a++)
    {
        for (int b = -1; b < 2; b++)
        {
            if (a == 0 && b == 0) continue;
            c += mat[(i+12+a)%12][(j+20+b)%20];
        }
    }
    return c;
}
int main()
{
    int tab[12][20], checkintab[12][20];
    char znak, spacja;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cin >> znak;
            if (znak == 'X') tab[i][j] = 1;
            else tab[i][j] = 0;
            checkintab[i][j] = tab[i][j];
        }
    }
    for (int x = 0; x < 36; x++)
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (checkintab[i][j] == 1 && somsiedzi(checkintab, i, j) != 2 && somsiedzi(checkintab, i, j) != 3) tab[i][j] = 0;
                if (checkintab[i][j] == 0 && somsiedzi(checkintab, i, j) == 3) tab[i][j] = 1;
            }
        }
        for (int i2 = 0; i2 < 12; i2++) for (int j2 = 0; j2 < 20; j2++) checkintab[i2][j2] = tab[i2][j2];
    }
    cout << somsiedzi(tab, 1, 18);
    return 0;
}
