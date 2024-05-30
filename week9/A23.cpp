#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define fi first
#define se second
// set bit : x |= 1<<i;
#define bit(n,i) ((n>>i)&1)
using namespace std;
const int maxn = 2e5 + 1;
int n, m;
int a[1001], b[maxn];
// C++ program to find triplets in a given
// array whose sum is zero
#include <bits/stdc++.h>
using namespace std;

// function to print triplets with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;

    // sort array elements
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++) {
        // initialize left and right
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while (l < r) {
            if (x + arr[l] + arr[r] == 0) {
                cout<<x<<' '<<arr[l]<<' '<<arr[r]<<'\n';
                l++;
                r--;
                found = true;
                //   break;
            }

            // If sum of three elements is less
            // than zero then increment in left
            else if (x + arr[l] + arr[r] < 0)
                l++;

            // if sum is greater than zero then
            // decrement in right side
            else
                r--;
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

}


// Ctrl + Alt + N : chạy code, nó sẽ tự lưu, t cài cho cậu
