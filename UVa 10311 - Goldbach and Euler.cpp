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

vector<ll> prime;
bool ar[100005];

void sieveE(ll n)
{
    memset(ar,true,sizeof ar);
    ar[0] = ar[1] = false;
    //prime.push_back(1);
    prime.push_back(2);

    for(ll i=4; i<=n; i+=2) {
        ar[i] = false;
    }

    int sqrtn = sqrt(n);
    for(int i=3; i<=sqrtn; i+=2){
        if(ar[i]==true){
            for(ll j = i*i; j<=n; j+=2*i){
                ar[j] = false;
            }
        }
    }

    for(ll i=3; i<=n; i+=2){
        if(ar[i]==true) prime.push_back(i);
    }
}

bool isPrime(ll n)
{
    if(n%2==0 || n<2) return false;

    int sqrtn = sqrt(n);
    for(int i=0; i<prime.size() && prime[i] <= sqrtn; i++){
        if(n%prime[i]==0) return false;
    }


    return true;
}


int main()
{
    #ifdef dipu
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    sieveE(100000);

    //cout << prime.size() << endl;

    ll n;
    while(cin >> n){
        //scanf("%lld",&n);
        if(n%2==1){
            if(isPrime(n-2)){
                printf("%lld is the sum of 2 and %lld.\n",n,n-2);
            }
            else{
                printf("%lld is not the sum of two primes!\n",n);
            }
            continue;
        }
        bool f = false;
        ll dis = LONG_MAX;
        ll p1,p2;
        for(ll i=(n/2)-1; i>=2; i--){
            if(isPrime(i) && isPrime(n-i)){
                p1 = i;
                p2 = n-i;
                f = true;
                break;
            }
        }
        if(f)printf("%lld is the sum of %lld and %lld.\n",n,p1,p2);
        if(!f)printf("%lld is not the sum of two primes!\n",n);
    }


    return 0;
}
