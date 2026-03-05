#include<iostream>
using namespace std;
#define endl "\n"
const int N = 1e5 + 10;

using LL = long long;

LL a[N]{},b[N]{};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n>>m;
    
    
    
    for(int i = 1; i < n + 1; i++)
    {
        int k;cin>>k;
        a[i] = k;
        
    }
    
    
    for(int i = 1; i < n + 1; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    
    
    while(m--)
    {
        int l,r;cin>>l>>r;
        cout << b[r] - b[l - 1] <<endl;
    }
    
    return 0;
}