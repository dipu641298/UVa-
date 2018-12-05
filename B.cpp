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

int point[] = {100,80,60,40,20,0};
int rad[] = {3,6,9,12,15,100};


int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif
    bool f = true;
    while(1){
        double x,y;
        int pl1 = 0,pl2 = 0;
        for(int i=0; i<3; i++){
            cin >> x >> y;
            if(x==-100){
                f = false;
            }
            for(int j=0; j<6; j++){
                if((x*x)+(y*y) <= rad[j]*rad[j]){
                    pl1 += point[j];
                    break;
                }
            }
        }

        for(int i=0; i<3; i++){
            cin >> x >> y;
            for(int j=0; j<6; j++){
                if((x*x)+(y*y) <= rad[j]*rad[j]){
                    pl2 += point[j];
                    break;
                }
            }
        }
        if(!f) break;

        //printf("%d %d\n",pl1,pl2);

        if(pl1>pl2){ printf("SCORE: %d to %d, PLAYER 1 WINS.\n",pl1,pl2); }
        else if(pl2>pl1) { printf("SCORE: %d to %d, PLAYER 2 WINS.\n",pl1,pl2); }
        else { printf("SCORE: %d to %d, TIE.\n",pl1,pl2); }


    }

    return 0;
}
