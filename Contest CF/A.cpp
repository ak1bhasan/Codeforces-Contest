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
    int n; cin >> n;
    vi v(n);

    for( auto &u : v ) cin >> u;

    sort( all(v) );
    int ans = 0;
    int i = 0, j = n - 1;

    while( ( v[i] + v[n - 1] ) % 2 != 0 && ( v[0] + v[j] ) % 2 != 0 ) {
        i++;
        j--;
        ans++;
    }
    cout << ans << endl;
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
2
5 2
7
3 1 4 1 5 9 2
7
2 7 4 6 9 11 5
3
1 2 1
2
2 1
8
8 6 3 6 4 1 1 6
*/


