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
#define mx 20000007

#define rep(a,b) for(int i=a; i<b; i++)

void print2(vi v){for(int i=0; i<v.size(); i++){cout<<v[i]<<" ";}cout<<endl;}
void print1(int ar[],int n){for(int i=0; i<n; i++){cout<<ar[i]<<" ";}cout<<endl;}

struct twin{
    ll a,b;
};


vector<ll> v;
vector<twin> vv;
bool p[mx];
void sieve(ll n)
{
    memset(p, true, sizeof p);
    p[0] = p[1] = false;

    for(ll i=2; i<=n; i+=2){
        p[i] = false;
    }

    for(ll i=3; i*i<=n; i+=2){
        if(p[i]){
            for(ll j=i*i; j<=n; j+=2*i){
                p[j] = false;
            }
        }
    }

    v.push_back(2);
    for(ll i=3; i<=n; i+=2){
        if(p[i]) v.push_back(i);
    }


}


void settwin()
{
    twin x;
    for(int i=1; i<v.size(); i++){
        if(v[i]-v[i-1] == 2){
            x.a = v[i-1];
            x.b = v[i];
            vv.push_back(x);
        }
    }
}


int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif

    sieve(20000007);
    settwin();

    ll n;
    while(scanf("%lld",&n)!=EOF){
        printf("(%lld, %lld)\n",vv[n-1].a,vv[n-1].b);
    }




    return 0;
}
