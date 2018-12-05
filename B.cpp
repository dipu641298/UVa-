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

ll r=0,c=0;

void func(string s)
{
    int j = 1;
    r =0, c=0;
    for(int i=1; s[i]!='C'; i++, j++){
        r *= 10;
        r += s[i]-'0';
    }
    j++;
    for( j; j<s.size(); j++){
        c *=10;
        c += s[j]-'0';
    }
}

int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif

    string input;
    while(1){
        cin >> input;
        func(input);
        //cout << r <<" "<< c << endl;
        if(r==0 && c==0) break;

        string s = "";
        while(c>0){
            int p = c%26;
            if(p==0) {s+='Z'; c-= 26;}
            else {s += p-1+'A'; c -= p;}
            c /= 26;
        }

        reverse(s.begin(),s.end());
        cout << s << r << endl;
    }

    return 0;
}
