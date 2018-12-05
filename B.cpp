/*Writer : Md. Shafiur Rahman Dipu  */

#include <bits/stdc++.h>
using namespace std;

#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define pi 2*acos(0.00)
#define INF 2e18

#define ull unsigned long long
#define ll long long
#define ld long double

#define vi vector<int>
#define qi queue<int>
#define si stack<int>
#define li list<int>
#define pb push_back
#define mx 100000007

#define rep(a,b) for(int i=a; i<b; i++)

void print2(vi v){for(int i=0; i<v.size(); i++){cout<<v[i]<<" ";}cout<<endl;}
void print1(int ar[],int n){for(int i=0; i<n; i++){cout<<ar[i]<<" ";}cout<<endl;}

ll dp[2003][12];

ll func(int i, int m, int n)
{
    if(dp[i][n]!=-1) {return dp[i][n];}
    if(n==0) {return 1;}
    if(i << n > m){return 0;}
    if(i>m){return 0;}

    ll sum = 0;
    for(int j= 2*i; j<=m; j++){
        if(j << n-1 > m) {break;}

        sum += func(j,m,n-1);
    }

    return dp[i][n] = sum;
}

int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif
    int tc;
    cin >> tc;
    int n,m;
    for(int kase =1 ; kase<=tc; kase++){

        cin >> n>>m;
        ll ans =0;
        if(n==1){ans=m;}
        else{
            memset(dp, -1 , sizeof dp);
            for(int i=1; i<=m/2; i++){
                if(i<<(n-1) > m) break;
                ans += func(i,m,n-1);
            }
        }
        printf("Data set %d: %d %d %lld\n",kase,n,m,ans);
    }

    return 0;
}
