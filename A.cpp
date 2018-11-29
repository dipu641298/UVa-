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

vector<int> v[8];
bool vis[8];
int mxsum = 0;
int ar[8];


int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif

    int n,x;
    int kase = 0;
    while(cin >> n && n){
        kase++;
        int a =0,b =0;
        for(int i=0; i<n; i++){
            cin>> x;
            if(x>0){
                a++;
            }
            else{
                b++;
            }
        }
        printf("Case %d: %d\n",kase,a-b);
    }

    return 0;
}
