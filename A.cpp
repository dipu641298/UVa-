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

vector<int> prime;

void sieve(int n)
{
    bool pr[1009];
    memset(pr,true,sizeof pr);
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

    for(int i=1; i<=n; i++){
        if(pr[i]) prime.push_back(i);
    }


}


int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    #endif

    sieve(1005);
    int n,c;
    while(cin >> n >>c ){
        int l = 0;
        for(int i=0; i<prime.size(); i++){
            if(prime[i] > n){
                break;
            }
            l++;
        }
        //cout << l << endl;
        printf("%d %d:",n,c);
        if(l%2==0) c = 2*c;
        else c = 2*c-1;

        if(c>l) c = l;

        for(int i=l/2-c/2, j=0; j<c ;i++,j++){
            printf(" %d",prime[i]);
        }
        cout << endl << endl;
    }


    return 0;
}
