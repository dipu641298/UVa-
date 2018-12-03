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

vector<ll> v;
bool p[32005];
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


set<int> s;
vector<int> vs;

void printcheck(int a, int b)
{
    set<int>::iterator it;
    bool f = true;
    for(it=s.begin(); it!=s.end(); it++){
        if(*it <a || *it>b){
            f = false;
            break;
        }
    }


    if(f){
        for(it=s.begin(); it!=s.end(); it++){
            vs.push_back(*it);
        }

        for(int i=0; i<vs.size()-1; i++){
            cout << vs[i] << " ";
        }
        cout << vs[vs.size()-1] << endl;
        vs.clear();
    }
}




int main()
{
    #ifdef dipu
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    sieve(32005);

    int x,y,a,b;

    while(scanf("%d%d",&x,&y) && (x||y)){
        a = min(x,y);
        b = max(x,y);
        int dif = 0;
        for(int i=1; i<v.size(); i++){
            int dif = v[i]-v[i-1];
            while(v[i]-v[i-1]==dif){
               s.insert(v[i]);
               s.insert(v[i-1]);
               i++;
            }
            i--;

            if(s.size() >= 3){
                printcheck(a,b);
            }
            s.clear();

            if(v[i]>b){break;}
        }
    }




    return 0;
}
