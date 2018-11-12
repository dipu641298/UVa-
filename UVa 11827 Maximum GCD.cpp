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


int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    #endif

    int n;
    string s;
    cin >> n;
    getline(cin,s);

    while(n--){
        getline(cin,s);

        istringstream ss(s);

        int ar[100];

        int n = 0;
        while(ss >> ar[n]) n++;

        int m = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int x = __gcd(ar[i],ar[j]);
                if(x>m){
                    m=x;
                }
            }
        }

        cout << m << endl;

    }

    return 0;
}
