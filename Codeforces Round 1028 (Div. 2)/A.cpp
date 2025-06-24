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
    int a, b, c, d; cin >> a >> b >> c >> d;

    int mn1 = INT_MAX, mn2 = INT_MAX;

    mn1 = min( mn1, min( b, d ) );
    mn2 = min( mn2, min( a, c ) );

    if( mn1 < mn2 ) cout << "Gellyfish" << endl;
    else if( mn2 == mn1 ) cout << "Gellyfish" << endl;
    else cout << "Flower" << endl;

}

int main()
{
    optimize();

    int t; cin >> t;
    while( t-- ) {
        solve();
    }

    return 0;
}
/**
5
1 2 3 4
100 999 1 1
10 20 10 30
12 14 13 11
998 244 353 107
*/


