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
    char znak;
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
    int c = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (checkintab[i][j] == 1 && (somsiedzi(checkintab, i, j) == 2 || somsiedzi(checkintab, i, j) == 3)) c++;
            if (checkintab[i][j] == 0 && somsiedzi(checkintab, i, j) == 3) c++;
        }
    }
    cout << c;
    return 0;
}
