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

struct ss{
    int i, c =0;
};

vector<int> prime;
bool pr[mx];

void sieve(int n)
{
    memset(pr,true,sizeof pr);
    pr[1] = false;
    pr[2] = true;
    for(int i=4; i<=n; i+= 2){
        pr[i] = false;
    }
    int sqrtn = sqrt(n);
    for(int i=3; i<=sqrtn; i+=2){
        if(pr[i]==true){
            for(int j=i*i; j<=n; j+=2*i){
                pr[j] = false;
            }
        }
    }
}

bool comp(ss a, ss b)
{
    return a.c > b.c;
}

int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    #endif

    sieve(1000000);

    int t,u,l;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&l,&u);
        ss dif[100005];
        for(int i=0; i<100005; i++){
            dif[i].i = i;
        }
        int w = -1;
        for(int i=l; i<=u; i++){
            if(pr[i]){
                if(w>0){
                    dif[i-w].c++;
                }
                w = i;
            }
        }

        sort(dif,dif+100005,comp);

        if(dif[0].c==0) printf("No jumping champion\n");
        else if(dif[0].c==dif[1].c) printf("No jumping champion\n");
        else printf("The jumping champion is %d\n",dif[0].i);

    }


    return 0;
}
