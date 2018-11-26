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
#define mx 10000007

#define rep(a,b) for(int i=a; i<b; i++)

void print2(vi v){for(int i=0; i<v.size(); i++){cout<<v[i]<<" ";}cout<<endl;}
void print1(int ar[],int n){for(int i=0; i<n; i++){cout<<ar[i]<<" ";}cout<<endl;}

vector<int> prime;
bool pr[mx];

void sieve(int n)
{
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
}

bool func(long n)
{
    string s;
    stringstream ss;
    ss << n;
    ss >> s;

    bool f = true;
    sort(s.begin(),s.end());

    do{
        long p;
        stringstream sm(s);
        sm >> p;
        //cout << s << " " << p << endl;
        if(!pr[p]){
            f = false;
            break;
        }
    }while(next_permutation(s.begin(),s.end()));

    if(f) return true;
    else return false;

}



int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    #endif

    sieve(10000000);
    int n,c;
    bool f;
    while(cin >> n && n ){
       int h = floor(log10(n));
       h++;
       long hi = pow(10,h);
        f = false;
       for(long i=n+1; i<=hi; i++){
            if(pr[i]){
                f = func(i);
                if(f){
                    printf("%ld\n",i);
                    break;
                }
            }
       }
       if(!f) printf("0\n");
    }


    return 0;
}
