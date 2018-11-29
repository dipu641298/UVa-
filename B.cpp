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

ull f[52];

void fib()
{
    f[0] = 1;
    f[1] = 1;
    for(int i=2; i<52; i++){
        f[i] = f[i-1]+f[i-2];
    }
}

int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    #endif

    fib();

    int t;
    cin >> t;
    int n;

    for(int kase= 1; kase<=t; kase++){
        cin >> n;
        ll ar[n];
        long ans = 1;
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j =51; j>=0 && ar[i]>0; j--){
                if(ar[i]>=f[j]){
                   ar[i] -= f[j];
                   cnt++;
                }
            }
            ans *= cnt;
        }

        printf("Case %d: %ld\n",kase,ans);


    }


    return 0;
}
