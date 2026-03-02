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
#define pq_max priority_queue<int> /// Max-heap
#define pq_min priority_queue<int, vi, greater<int>> /// Min-heap
#define umap unordered_map
#define uset unordered_set



#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()



const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);


typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


/// Debugger


template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; debug_out(args); } while(0)

void debug_out () {
    cerr << endl;
}

template <typename T>
void debug_out( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... Args>
void debug_out( T arg, const Args &... rest) {
    cerr << arg << ' ';
    debug_out(rest...);
}

void solve()
{
    ll n, h, k; cin >> n >> h >> k;

    vector<ll> v(n);
    for( auto &u : v ) cin >> u;

    ll sum = accumulate( all(v), 0LL );

    ll ans = ( n + k ) * ( h / sum );
    h %= sum;

    if( h == 0 ) {
        cout << ans - k << endl;
        return;
    }

    vector<ll> mx(n);

    for( ll i = n - 2; i >= 0; i-- ) mx[i] = max( mx[i + 1], v[i + 1] );

    ll mn = LLONG_MAX;
    for( int i = 0; i < n; i++ ) {
        mn = min( mn, v[i] );
        mx[i] -= mn;
        mx[i] = max( mx[i], 0LL );
    }

    for( int i = 0; i < n; i++ ) {
        h -= v[i];
        ans++;
        if( mx[i] >= h ) break;
    }

    cout << ans << endl;

}

int main()
{
    optimize();

    int t; cin >> t;

    while( t-- ) solve();

    return 0;
}

