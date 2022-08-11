#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define pb push_back
#define fi first
#define se second
#define int long long int
#define pii pair<int,int>
#define rep(i,a,b) for (int i = a; i < b; i++)
const int MAX = 2e5 + 5;
const int MAXK = 25;
const int mod = 1e9 + 7;
const int INF = 1e16;
int gcd(int a, int b)
{
	while (b != 0)
	{
		a = a % b;
		swap(a, b);
	}
	return a;
}
int binpow(int a, int b)
{
	int res = 1;
	while (b > 0)
	{
		if (b % 2 == 1)
			res = res * a % mod;
		a = a * a % mod;
		b /= 2;
	}
	return res;
}
void solve() {
	int n, m;
	cin >> n >> m;
	cout << binpow(n, m) << "\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	//cin >> t;
	for (int i = 1; i <= t; i++)
	{
		//cout << "Case #" << i << ": ";
		solve();
	}
}