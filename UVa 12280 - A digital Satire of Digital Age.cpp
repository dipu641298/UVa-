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

long func(char c)
{
    long sum = 0;
    int x = (int)c;

    while(x>0){
        if(x%2==0){
            sum += 250;
        }
        else{
            sum += 500;
        }
        x /= 2;
    }


    return sum;

}


char c[7][18];
char ceq[][25] = { "........||........",
                ".../\\...||.../\\...",
                "../..\\..||../..\\..",
                "./....\\.||./....\\.",
                "/......\\||/......\\",
                "\\______/||\\______/",
                "........||........"
               };

void func1()
{
    string s1 = "",s2 = "";
     for(int i=0; i<7; i++){
        for(int j=0; j<9; j++){
            if(c[i][j]>=65 && c[i][j]<=90){
                s1 += c[i][j];
            }
        }
    }

    for(int i=0; i<7; i++){
        for(int j=9; j<18; j++){
            if(c[i][j]>=65 && c[i][j]<=90){
                s2 += c[i][j];
            }
        }
    }

    for(int i=0; i<7; i++){
        for(int j=0; j<18; j++){
            if(i==4 && j>0 && j<=s1.size() && s1.size()>0){
                for(int k=0;k<s1.size();k++){
                    cout<<s1[k];
                    j++;
                }
            }
            if(i==4 && j>10 && j<=s2.size()+10 && s2.size()>0){
                for(int k=0;k<s2.size();k++){
                    cout<<s2[k];
                    j++;
                }
                j--;
            }
            else{
                cout << ceq[i][j];
            }
        }
        cout << endl;
    }

}


char crihi[][29]= { "........||.../\\...",
                 "........||../..\\..",
                ".../\\...||./....\\.",
                "../..\\..||/......\\",
                "./....\\.||\\______/",
                "/......\\||........",
                "\\______/||........"
               };

void func2()
{
    string s1 = "",s2 = "";
     for(int i=0; i<7; i++){
        for(int j=0; j<9; j++){
            if(c[i][j]>=65 && c[i][j]<=90){
                s1 += c[i][j];
            }
        }
    }

    for(int i=0; i<7; i++){
        for(int j=9; j<18; j++){
            if(c[i][j]>=65 && c[i][j]<=90){
                s2 += c[i][j];
            }
        }
    }

    for(int i=0; i<7; i++){
        for(int j=0; j<18; j++){
            if(i==5 && j>0 && j<=s1.size() && s1.size()>0){
                for(int k=0;k<s1.size();k++){
                    cout<<s1[k];
                    j++;
                }
            }
            if(i==3 && j>10 && j<=s2.size()+10 && s2.size()>0){
                for(int k=0;k<s2.size();k++){
                    cout<<s2[k];
                    j++;
                }
                j--;
            }
            else{
                cout << crihi[i][j];
            }
        }
        cout << endl;
    }

}


char clhi[][29]= {  ".../\\...||........",
                 "../..\\..||........",
                 "./....\\.||.../\\...",
                 "/......\\||../..\\..",
                 "\\______/||./....\\.",
                  "........||/......\\",
                  "........||\\______/"
               };

void func3()
{
    string s1 = "",s2 = "";
     for(int i=0; i<7; i++){
        for(int j=0; j<9; j++){
            if(c[i][j]>=65 && c[i][j]<=90){
                s1 += c[i][j];
            }
        }
    }

    for(int i=0; i<7; i++){
        for(int j=9; j<18; j++){
            if(c[i][j]>=65 && c[i][j]<=90){
                s2 += c[i][j];
            }
        }
    }

    for(int i=0; i<7; i++){
        for(int j=0; j<18; j++){
            if(i==3 && j>0 && j<=s1.size() && s1.size()>0){
                for(int k=0;k<s1.size();k++){
                    cout<<s1[k];
                    j++;
                }
            }
            if(i==5 && j>10 && j<=s2.size()+10 && s2.size()>0){
                for(int k=0;k<s2.size();k++){
                    cout<<s2[k];
                    j++;
                }
                j--;
            }
            else{
                cout << clhi[i][j];
            }
        }
        cout << endl;
    }

}









int main()
{

    /*for(int i=0; i<7; i++){
            for(int j=0; j<18; j++){
                cout << ceq[i][j];
            }
            cout << endl;
        }*/


    //freopen("inp.txt","r",stdin);
    int t;
    cin >> t;
    for(int kase =1 ; kase<=t; kase++){

        printf("Case %d:\n",kase);

        string s;
        for(int i=0; i<7; i++){
            for(int j=0; j<18; j++){
                cin >> c[i][j];
            }
        }
        cin >> s;

        long sum1 = 0, sum2 =0;
        int b1,b2;
        for(int i=0; i<7; i++){
            for(int j=0; j<9; j++){
                if(c[i][j]>=65 && c[i][j]<=90){
                    sum1 += func(c[i][j]);
                }
                if(j==7 && c[i][j]=='/'){
                    b1 = i;
                }
            }
        }

        for(int i=0; i<7; i++){
            for(int j=9; j<18; j++){
                if(c[i][j]>=65 && c[i][j]<=90){
                    sum2 += func(c[i][j]);
                }
                if(j==17 && c[i][j]=='/'){
                    b2 = i;
                }
            }
        }
        bool eq = false, lhi = false, rihi = false;
        if(sum1==sum2) eq = true;
        else if(sum1>sum2) rihi = true;
        else lhi = true;


        if(eq){
            if(b1==b2){
                printf("The figure is correct.\n");
                continue;
            }
            else{
                func1();
            }
        }

        else if(lhi){
            if(b1<b2){
                printf("The figure is correct.\n");
                continue;
            }
            else{
                func3();
            }
        }

        else if(rihi){
            if(b1>b2){
                printf("The figure is correct.\n");
                continue;
            }
            else{
                func2();
            }
        }






    }





    return 0;
}
