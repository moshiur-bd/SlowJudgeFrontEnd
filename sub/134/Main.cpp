#include<bits/stdc++.h>
using namespace std;
#define inf 999999
//#define MAX 100000
#define gcd(a,b) __gcd(a,b)
#define i64 long long
int getInt(){int x;scanf("%d",&x);return x;}
long long getLongLong(){long long x;scanf("%lld",&x);return x;}
double getDouble(){double x;scanf("%lf",&x);return x;}
char  getChar(){char x;scanf("%c",&x);return x;}
#define Int getInt()
#define Char getChar()
#define I64 getLongLong()
#define Double getDouble()
#define bug printf("debug\n");
#define $ln printf("\n");
#define REP(i,n) for(int i=0;i<n;i++)
#define lcm(a,b) a*b/gcd(a,b)
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define dd pair<double,double>
#define ll long long
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define EPS numeric_limits<double>::epsilon()
template<typename t>
t abs(t a)
{
    if(a>=0)
        return a;
    return -a;
}
//error
#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); $ln; }

vector<string> split(const string& s, char c) {
	vector<string> v;
	stringstream ss(s);
	string x;
	while (getline(ss, x, c))
		v.emplace_back(x);
	return move(v);
}

void err(vector<string>::iterator it) {}
template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args) {
	cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << "  ";
	err(++it, args...);
}
void FastIO()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
}
////////////////////////////////////

int main()
{
    //freopen("in.txt","r",stdin);
   double   a,b,c,d,p;
   int n;
   while(scanf("%lf%lf%lf%lf%lf%d",&p,&a,&b,&c,&d,&n)==6){
        vector<double> pr;
        //error(n);
        for(int i=1;i<=n;i++){
            pr.pb(p*(sin(a*i+b)+cos(c*i+d)+2));
            //error(i);
        }
        double ans=0,mx=0;
        for(int i=0;i<pr.size();i++){
            mx=max(pr[i],mx);
            ans=max(ans,mx-pr[i]);
        }
        printf("%.10lf\n",ans);

   }
    return 0;

}

