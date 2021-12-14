#include <bits/stdc++.h>

using namespace std;
#define ll           long long
#define ld           long double
#define F            first
#define S            second
#define el           '\n'
#define RateForNow_NEWBIE_1044_357          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = 3.14159265358979323846;
const ll inf = 1e+9 + 5, MOD = 1e9 + 7, MAX = 1e18 + 1, N = 1E+6 + 5;
//ll n = 0, k = 0, m = 0, bit = 0, res = 0, cnt = 0, a = 0, b = 0;

void sol();


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    RateForNow_NEWBIE_1044_357
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int mx = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) {
                if (b[j] / a[i] == mx) {
                    cnt++;
                } else if (b[j] / a[i] > mx) {
                    mx = b[j] / a[i];
                    cnt = 1;
                }
            }
        }
    }
    cout << cnt << '\n';
}

