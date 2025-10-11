//#include<bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
//typedef vector<int> vi;
//typedef vector<ll> vl;
//typedef vector<vi> vvi;
//typedef vector<vl> vvl;
//typedef pair<int,int> pii;
//typedef pair<double, double> pdd;
//typedef pair<ll, ll> pll;
//typedef vector<pii> vii;
//typedef vector<pll> vll;
//typedef double dl;
//
//#define endl '\n'
//#define PB push_back
//#define F first
//#define S second
//#define all(a) (a).begin(),(a).end()
//#define rall(a) (a).rbegin(),(a).rend()
//#define sz(x) (int)x.size()
//
//const double PI = acos(-1);
//const double eps = 1e-9;
//const int inf = 2000000000;
//const ll infLL = 9000000000000000000;
//#define MOD 1000000007
//
//
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
//
//
//
//int main()
//{
//    optimize();
//
//    int t; cin >> t;
//    while( t-- ) {
//        int n; cin >> n;
//        string s; cin >> s;
//
//    }
//
//    return 0;
//}



#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int isPrime( int m )
{
    if( m <= 1 ) return 0;
    for( int i = 2; i*i <= m; i++ ) {
        if( m % i == 0 ) return 0;
    }
    return 1;
}
int nextPrime( int n )
{
    int next =  n+1;

    while(1) {
        if( isPrime(next) ) return next;
        next++;
    }
}

int main()
{
    optimize();

    int n, m; cin >> n >> m;

    if( isPrime(m) && nextPrime(n) == m ) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}


















