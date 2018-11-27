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
#define mx 1000007

#define rep(a,b) for(int i=a; i<b; i++)

void print2(vi v){for(int i=0; i<v.size(); i++){cout<<v[i]<<" ";}cout<<endl;}
void print1(int ar[],int n){for(int i=0; i<n; i++){cout<<ar[i]<<" ";}cout<<endl;}

vector<long> prime;
vector<ll> prime2;
bool ar[1000008];

void sieveE(int n)
{
    memset(ar,true,sizeof ar);
    ar[0] = ar[1] = false;
    prime.push_back(2);
    for(int i=4; i<=n; i+=2) {
        ar[i] = false;
    }

    int sqrtn = sqrt(n);
    for(int i=3; i<=sqrtn; i+=2){
        if(ar[i]==true){
            for(int j = i*i; j<=n; j+=2*i){
                ar[j] = false;
            }
        }
    }

    for(int i=3; i<=n; i+=2){
        if(ar[i]==true) prime.push_back(i);
    }
}

void segmentedSieve(ll a, ll b)
{
    if(a==1) a++;
    ll sqrtn = sqrt(b);
    sieveE(sqrtn);
    memset(ar,true, sizeof ar);

    for(int i=0; i<prime.size() && prime[i]<=sqrtn; i++){
        ll p = prime[i];
        ll j = p*p;
        if(j<a) j = ((a+p-1)/p)*p;

        for( ; j<=b; j+=p){
            ar[j-a] = false;
        }
    }

    for(ll i=a; i<=b; i++){
        if(ar[i-a]==true) prime2.push_back(i);
    }

}


int main()
{
    #ifdef dipu
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    //sieveE(1000000);

    ll u,l;
    while(cin >> l >> u){
        segmentedSieve(l,u);
        if(prime2.size()<2){
            printf("There are no adjacent primes.\n");
            prime.clear();
            prime2.clear();
            continue;
        }

        int cl = INT_MAX,dis = INT_MIN;
        ll prcl1,prcl2,prdis1,prdis2;

        for(int i=1; i<prime2.size(); i++){
            if(prime2[i]-prime2[i-1] < cl){
                cl = prime2[i]-prime2[i-1];
                prcl1 = prime2[i-1];
                prcl2 = prime2[i];
            }
            if(prime2[i]-prime2[i-1] > dis){
                dis = prime2[i]-prime2[i-1];
                prdis1 = prime2[i-1];
                prdis2 = prime2[i];
            }
        }


        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",prcl1,prcl2,prdis1,prdis2);

        prime.clear();
        prime2.clear();
    }


    return 0;
}
