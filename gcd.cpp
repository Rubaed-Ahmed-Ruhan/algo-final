#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int gcd(int a, int b) {
    // recursive code
    if(a == b) return a;
    if(a >= b) a -= b;
    else b -= a;
    return gcd(a, b);
}

void solve() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    // iterative approce for gcd
    int ans = 1;
    for (int i = 1; i <= a; ++i)
    {
         if(a % i == 0 and b % i == 0) ans = i;
    }
    cout << ans << endl;
  
}

int32_t main() {

    // S4DM4N S4K1B 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    
    int tt = 1; 
    // cin >> tt;
    while(tt--) solve();
    return 0;
}
