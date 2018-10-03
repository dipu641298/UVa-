
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

    int a1,b1,c1,a2,b2,c2;
    while(cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2){
        if(a1 == 0 && b1 == 0 && c1 == 0 && a2 == 0 && b2 == 0 && c2 == 0){
            break;
        }

        if(( a1*b2 - a2*b1 ==0 ) || ( b1*a2 - b2*a1 == 0 )){
            cout<<"No fixed point exists."<<endl;
        }
        else {
            double res_x = (double)(c1*b2 - c2*b1)/(double)(a1*b2 - a2*b1);
            double res_y = (double)(c1*a2 - c2*a1)/(double)(b1*a2 - b2*a1);

            printf("The fixed point is at %0.2lf %0.2lf.\n",res_x,res_y);
        }

    }


    return 0;
}

