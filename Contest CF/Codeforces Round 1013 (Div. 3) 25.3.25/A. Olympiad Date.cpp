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
        int n;
        cin >> n;
        vi v(n);

        int cnt = 0;

        vi dig = { 0, 1, 0, 3, 2, 0, 2, 5 };
        int k = dig.size();

        for( int i = 0; i < n; i++ )
        {
            cin >> v[i];
        }

        if( n < k )
        {
            cout << 0 << endl;
            continue;
        }

        int result = 0;

        for(int i = 0; i < n; i++ )
        {
            if( v[i] == dig[cnt] )
            {
                cnt++;
                if( cnt == k )
                {
                    result = i + 1;
                    break;
                }
            }

        }

        cout << (cnt == k ? result : 0) << endl;
    }

    return 0;
}


