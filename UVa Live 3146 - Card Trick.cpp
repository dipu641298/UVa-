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

string num[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
char suit[] = {'C','D','H','S'};

string cards[52];


void func()
{
    for(int i=0; i<52; i++){
        cards[i] = "";
    }
    int p = 0;
    for(int i=0; i<13; i++ ){
        for(int j=0; j<4; j++){
            cards[p] = cards[p] + num[i] + suit[j];
            p++;
        }
    }
}


int pos(string s)
{
    for(int i=0; i<52; i++){
        if(cards[i]==s){
            return i;
        }
    }
}


int retval(string magi)
{
    int magicva = 0;
    if(magi.size() > 2){
        magicva = 10;
    }
    else{
        char cc = magi[0];
        if(cc>='2' && cc<='9'){ magicva = cc-'0'; }
        else if(cc=='A') { magicva = 1;}
        else if(cc=='J'){ magicva = 11;}
        else if(cc=='Q') { magicva = 12;}
        else { magicva = 13;}
    }

    return magicva;
}


bool check(string missi, string mag, int add)
{
    int mval = retval(mag);
    mval += add;

    if(mval > 13){
        mval %= 13;
    }

    if(mval==10){
        if(missi[0]=='1' && missi[1]=='0'){
            return true;
        }
        else{ return false;}
    }

    char cc;
    if(mval>=2 && mval<=9){ cc = mval+'0';}
    else if(mval==1) { cc = 'A'; }
    else if(mval==11){ cc = 'J';}
    else if(mval==12) { cc = 'Q';}
    else { cc = 'K';}

    if(cc == missi[0]){ return true;}
    else{ return false;}

}

int main()
{
    #ifdef dipu
    //freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif

    func();

    int tc;
    cin >> tc;
    int n,m;
    string s;
    vector<string> v;
    for(int kase =1 ; kase<=tc; kase++){
        v.clear();
        for(int i=0; i<5; i++){
            cin >> s;
            v.push_back(s);
        }

        sort(v.begin(),v.end());

        do{
            string missing = v[0];
            string magic = v[1];
            if(missing[missing.size()-1] != magic[magic.size()-1]){continue;}

            int smallest, add=0;
            int pos2,pos3,pos4;
            pos2 = pos(v[2]);
            pos3 = pos(v[3]);
            pos4 = pos(v[4]);

            if(pos2 < pos3 && pos2 < pos4){
                add += 1;
                if(pos3 > pos4){add += 3;}
            }
            else if(pos3 < pos2 && pos3 < pos4){
                add += 2;
                if(pos2 > pos4){add += 3;}
            }
            else if(pos4 < pos2 && pos4 < pos3){
                add += 3;
                if(pos2 > pos3){add += 3;}
            }



            bool f = check(missing, magic, add);
            if(f){
                //cout << add << endl;
                //cout << pos2 << " " << pos3 << " " << pos4 << endl;
                for(int i=0; i<v.size(); i++){
                    cout << v[i]<< " ";
                }
                cout << endl;

                break;
            }


        }while(next_permutation(v.begin(),v.end()));
    }

    return 0;
}
