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

struct xy{
    double x;
    double y;

};

int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    #endif

    double pa,pb;
    while(scanf("%lf%lf",&pa,&pb)!=EOF){
        vector<xy> vv;
        vector<xy> u;
        xy a;
        a.x = pa;
        a.y = pb;
        vv.push_back(a);
        for(int i=0; i<3; i++){
            cin>>a.x>>a.y;
            vv.push_back(a);
        }
            int c;
        for(int i=0 ;i<vv.size(); i++){
            for(int j=i+1; j<vv.size(); j++){
                if(vv[i].x == vv[j].x && vv[i].y == vv[j].y){
                    c = i;
                    vv.erase(vv.begin()+j);
                }
            }
        }

        u.push_back(vv[c]);

        for(int i=0; i<3; i++){
            if(i==c){
                continue;
            }
            else{
                u.push_back(vv[i]);
            }
        }

        double res_x,res_y;


        /*for(int i=0; i<3; i++){
            cout<<u[i].x<<" "<<u[i].y<<endl;
        }*/

        if( abs(u[0].x-u[1].x) > abs(u[0].x-u[2].x) ){
            if(u[1].x > u[0].x){
                res_x = u[2].x + abs(u[0].x-u[1].x);
            }
            else {
                res_x = u[2].x - abs(u[0].x-u[1].x);
            }
        }
        else{
            if(u[2].x > u[0].x){
                res_x = u[1].x + abs(u[0].x-u[2].x);
            }
            else {
                res_x = u[1].x - abs(u[0].x-u[2].x);
            }
        }



        if( abs(u[0].y-u[1].y) > abs(u[0].y-u[2].y) ){
            if(u[1].y > u[0].y){
                res_y = u[2].y + abs(u[0].y-u[1].y);
            }
            else {
                res_y = u[2].y - abs(u[0].y-u[1].y);
            }
        }
        else{
            if(u[2].y > u[0].y){
                res_y = u[1].y + abs(u[0].y-u[2].y);
            }
            else {
                res_y = u[1].y - abs(u[0].y-u[2].y);
            }
        }



        printf("%0.3lf %0.3lf\n",res_x,res_y);



    }




    return 0;
}

