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
bool ar[10000005];

void sieveE(ll n)
{
    memset(ar,true,sizeof ar);
    ar[0] = ar[1] = false;

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
}

void goldbach(ll n)
{
    if(ar[n-2]){
        printf("2 %lld\n",n-2);
    }
    else{
        for(ll i=2; i<=n/2 ; i++){
            if(ar[i] && ar[n-i]){
                printf("%lld %lld\n",i,n-i);
                break;
            }
        }
    }
}



int main()
{
    #ifdef dipu
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    sieveE(10000000);

    //cout << prime.size() << endl;

    ll n;
    while(scanf("%lld",&n)!=EOF){
        //scanf("%lld",&n);
        if(n<8){
            printf("Impossible.\n");
            continue;
        }
        if(n%2==0){
            printf("2 2 ");
            goldbach(n-4);
        }
        else{
            printf("2 3 ");
            goldbach(n-5);
        }
    }


    return 0;
}
