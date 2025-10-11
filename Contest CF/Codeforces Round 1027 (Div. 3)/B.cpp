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
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    int cnt0 = 0;

    for( auto &u : s ) if( u == '0' ) cnt0++; // 0
    int cnt1 = n - cnt0; // 2

    int m = n / 2; // 1
    int d = m - k; // 0

    if( ( d <= cnt0 && d <= cnt1 ) && ( cnt0 - d ) % 2 == 0 )
        cout << "YES" << endl;
    else cout << "NO" << endl;

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
6
6 2
000000
2 1
01
4 1
1011
10 2
1101011001
10 1
1101011001
2 1
11
*/

