#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll factorial(ll x)
{
    cout<<x<<' '<<&x<<'\n';
    if(x == 1) return 1;

    static int c = 0;
    c+= x;
    return x*factorial(x-1);
}

bool checkSNT(int x)
{
    int n = x;
    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int GCD(int a, int b)
{
    if(a < b) swap(a,b);
    if(b == 0)
    {
        return a;
    }
    return GCD(b, a%b);
}
bool checkNTCN(int a, int b)
{
    return GCD(a,b) == 1;
}
ll kCn(ll k, ll n)
{
    return factorial(n)/(factorial(n-k) * factorial(k));
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<kCn(k,n);
}
