#include <bits/stdc++.h>
#include<ctime>
#include<cstdlib>
#define INF 1e9
#define ll long long
#define fi first
#define se second
// set bit : x |= 1<<i;
#define bit(n,i) ((n>>i)&1)
using namespace std;
const int maxn = 2e5 + 1;
int n;
int a[maxn];
ll sum = 0;
void bubbleSort(int n)
{
    for(int i = 1;i < n; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}
int main()
{
#define taskname "respool"

    if (fopen(taskname ".inp", "r"))
    {
        freopen(taskname ".inp", "r", stdin);
        freopen(taskname ".out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    clock_t Start = clock();
    cin>>n;
    for(int i=1 ;i<=n;i++)
    {
        a[i] = n-i;
    }
    bubbleSort(n);
    clock_t End = clock();
    double Time = double(End - Start)/CLOCKS_PER_SEC;
    cout<<n<<' '<<Time<<'\n';
    for(int i = 1; i < n;i++)
    {
        sum += a[i];
    }
    cout<<sum<<'\n';
    // MAX n < 20000;

}


// Ctrl + Alt + N : chạy code, nó sẽ tự lưu, t cài cho cậu
