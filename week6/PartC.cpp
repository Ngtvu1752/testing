#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 11;
int n,m,k;
char c[maxn][maxn];
bool vis[maxn][maxn];

void init(int n, int m, int k)
{
    for(int i = 1; i <=n; i++)
    {
        for(int j= 1; j<=m; j++)
        {
            c[i][j] = '.';
            vis[i][j] = false;
        }
    }
//    for(int i = 0; i<=n;i++)
//    {
//        for(int j = 0 ; j <=m;j++)
//        {
//            a[i][j] = -1;
//        }
//    }
    int cnt = 0;
    while(cnt < k)
    {
        int row = rand() % n +1;
        int col = rand() % m +1;
        if(c[row][col] != '*')
        {
            c[row][col] = '*';
            cnt++;
        }
    }
}

int mineAround(int u, int v)
{
    return (c[u+1][v+1] == '*') + (c[u+1][v-1] == '*') + (c[u-1][v+1] =='*') + (c[u-1][v-1] =='*') +
           (c[u][v+1] == '*') + (c[u+1][v] == '*') + (c[u-1][v] == '*') + (c[u][v-1] == '*');
}
void bfs(int u, int v, vector<vector<int>>&a)
{
    if(u <= n && u >=1 && v <=m && v>=1)
    {
        if(c[u][v] == '*' || vis[u][v] == true)
        {
            return;
        }
        a[u][v] = mineAround(u,v);
//    cout<<a[u][v]<<' ';
        vis[u][v] = true;

        bfs(u+1, v, a);
        bfs(u,v+1, a);
        bfs(u-1,v, a);
        bfs(u,v-1, a);
    }
    else return;
}
void print(vector<vector<int>> &a)
{
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
//    for(int i = 1; i<=n; i++)
//    {
//        for(int j = 1; j<=m; j++)
//        {
//            cout<<c[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
}
int main()
{
    srand(time(nullptr));
    cin>>n>>m>>k;
    vector<vector<int>> a(n+1, vector<int>(m+1, -1));
    init(n,m,k);
    print(a);
    bool game = true;
    int cnt = 0;
    while(game)
    {
        int x, y;
        cout << "Nhap hang (tu 0 den " << m - 1 << "): ";
        cin >> x;
        cout << "Nhap cot (tu 0 den " << n - 1 << "): ";
        cin >> y;
        if(c[x][y] == '*')
        {
            cout<<"YOU ARE DEAD!"<<'\n';
            game = false;
        }
        else
        {
            cnt++;
            bfs(x,y,a);
            print(a);
            if(cnt == n*m - k)
            {
                cout<<"YOU WIN"<<'\n';
            }
        }
    }
}

