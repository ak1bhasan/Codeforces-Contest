#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007

void solve()
{
    int n; cin >> n;

    vector<int> v(n);

    for( auto &u : v ) cin >> u;

    cout << min( v[0], v[1] ) + v[0] << endl;

}

int main()
{
    optimize();

    int t; cin >> t;

    while( t-- ) solve();

    return 0;
}
