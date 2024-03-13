#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define fi first
#define se second
// set bit : x |= 1<<i;
#define bit(n,i) ((n>>i)&1)
using namespace std;
const int maxn = 2e5 + 1;
const int N = 5;
int arr[N] = {1,2,3,4};
int a[5];

int b[] = {1,2,3,4};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a1[5]; // random gia tri cac phan tu
    int b1[]  = {1,2,3,4};
    for(int i = 0; i < 4; i++)
    {
        cout<<a[i]<<' '<<a1[i]<<'\n';
    }
    cout<<"\n"<<"blablabla"<<'\n';
//    const int M = 3;
//    int arr1[M] = {1,2,3,4};  Loi do khoi tao nhieu hon M ptu
    for(int i = 0; i < N;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<"\n"<<"blablabla"<<'\n';

//    cout<<'\n';
//    for(int i= 0; i<M;i++)
//    {
//        cout<<arr1[i]<<' ';
//    }
    for(int i =0; i< sizeof(b)/sizeof(b[0]); i++)
    {
        cout<<b[i]<<' '<<b1[i]<<'\n';
    }
}


