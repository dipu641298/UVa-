/*Writer : Md. Shafiur Rahman Dipu  */

#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

#define ull unsigned long long
#define ll long long
#define ld long double

#define VI vector<int>
#define QI queue<int>
#define SI stack<int>
#define LI list<int>
#define max 10007

int main()
{
    ull n;
    while(cin>>n){
    ull x,sum=0;
    //cin>>n;
    x = (n+1)/2;
    x = x*x;
    for(int i=0; i<3; i++){
        sum+=(2*x)-1;
        x--;
    }
    cout<<sum<<endl;
    }
    return 0;
}


