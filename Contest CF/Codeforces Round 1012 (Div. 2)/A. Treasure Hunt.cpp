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
//    int t;
//    cin >> t;
//    while( t-- )
//    {
//        ll x, y, a;
//        cin >> x >> y >> a;
//
//        ll depth = x + y;
//
//        ll remaining = a % depth;
//
//        ( remaining == x ) ? cout << "YES" << endl : cout << "NO" << endl;
//
//    }
//
//    return 0;
//}






/**
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



int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        ll x, y, a;
        cin >> x >> y >> a;

        if( x > a )
        {
            cout << "NO" << endl;
            continue;
        }

        ll depth = ( x + y );
        ll cycle = a / depth;

        ll reminder = ( a - ( x * cycle + y * cycle ) );

        ( x > reminder ) ? cout << "NO" << endl :
                                cout << "YES" << endl;

    }

    return 0;
}
**/











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

void solve()
{
    int t;
    cin >> t;
    while( t-- )
    {
        ll x, y, a;
        cin >> x >> y >> a;

        if( x > a )
        {
            cout << "NO" << endl;
            continue;
        }

        ll depth = ( x + y );
        ll cycle = a / depth;

        ll reminder = ( a - ( x * cycle + y * cycle ) );

        ( x > reminder ) ? cout << "NO" << endl :
                                cout << "YES" << endl;

    }
}

int main()
{
    optimize();

    solve();

    return 0;
}
