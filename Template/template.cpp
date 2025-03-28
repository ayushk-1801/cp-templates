#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;

#ifdef LOCAL
#include "debug.cpp"
#define debug(...) std::cerr << __LINE__ << ": [",__DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#define debugArr(...)
#endif
/*--------------------------------------------------------------------------------------------------------------------------*/

void solve() {
}

int main() {
#ifdef LOCAL
  freopen("error.txt", "w", stderr);
#endif
  fastio();
  auto start1 = high_resolution_clock::now();
  int TC = 1;
  cin >> TC;
  while (TC--)
    solve();
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef LOCAL
  cerr << "Time: " << duration.count() / 1000 << endl;
#endif
  return 0;
}
