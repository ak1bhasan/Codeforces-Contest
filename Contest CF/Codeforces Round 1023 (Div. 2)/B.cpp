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



void solve()
{
    ll n, m; cin >> n >> m;
    vl v(n);
    int sum = 0;

    const ll INF = 1e18;
    ll mini = INF;
    ll maxi = -INF;
    for( int i = 0; i < n; i++ )
    {
        cin >> v[i];
        sum += v[i];
        mini = min( mini, v[i] );
        maxi = max( maxi, v[i] );
    }

    int cnt = 0;

    for( int i = 0; i < n; i++ ) if( v[i] == maxi ) cnt++;

    if( maxi - mini > m + 1 ||
            ( maxi - mini == m + 1 && cnt > 1 ) ) {
            cout << "Jerry" << endl;
            return;
            }
    cout << ( sum % 2 ? "Tom\n" : "Jerry\n" );

}

int main()
{
    optimize();

    int t; cin >> t;
    while( t-- )
    {
        solve();
    }

    return 0;
}
*/






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
    vl v(n);

    ll sum = 0;
    const ll INF = 1e18;
    ll mini = INF;
    ll maxi = -INF;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] > maxi)
        {
            maxi = v[i];
            cnt = 1;
        }
        else if (v[i] == maxi)
        {
            cnt++;
        }
        mini = min(mini, v[i]);
    }

    if (maxi - mini - (cnt == 1) > k)
    {
        cout << "Jerry" << endl;
    }
    else
    {
        cout << (sum % 2 == 1 ? "Tom\n" : "Jerry\n");
    }
}

int main()
{
    optimize();

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
