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
#define pb push_back
#define mx 100000007

#define rep(a,b) for(int i=a; i<b; i++)

void print2(vi v){for(int i=0; i<v.size(); i++){cout<<v[i]<<" ";}cout<<endl;}
void print1(int ar[],int n){for(int i=0; i<n; i++){cout<<ar[i]<<" ";}cout<<endl;}


#define MAX 10007

struct point{

    double x,y;

};


bool compx(point a, point b)
{
    return a.x < b.x ;
}


double dis( point a, point b)
{
    return  sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y) );
}

double combine(point p[] , int low, int mid, int high, double min_left, double min_right)
{
    double d = min(min_left,min_right);

    double line = (double)( p[mid].x + p[mid+1].x ) / 2.00 ;

    for(int i= mid+1; i<=high && p[i].x < line+d; i++){
        for(int j = mid; j>=low && p[j].x > line-d; j--){
            double ln = dis(p[i],p[j]);
            if(ln < d){
                d = ln;
            }
        }
    }

    return d;
}

double findclosest(point px[], int low, int high)
{
    if(low >= high){
        return 99999;
    }

    int mid = (low+high)/2;

    double min_left = findclosest(px , low, mid);
    double min_right =findclosest(px, mid+1, high);

    return combine(px, low, mid, high, min_left, min_right);


}


int main()
{
    int n;
    while(cin >> n && n){

        point ar[n];

        for(int i=0; i<n; i++){
            cin>>ar[i].x>>ar[i].y;
        }

        if(n == 1){
            cout<<"INFINITY"<<endl;
            continue;
        }

        sort(ar,ar+n,compx);
        double res = findclosest(ar,0,n-1);

        if(res >= 10000.00000){
            cout<<"INFINITY"<<endl;
        }
        else{
            printf("%0.4lf\n",res);
        }

    }


    return 0;

}
