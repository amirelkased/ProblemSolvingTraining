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
    /*
     * Dependant on previous people of groups with current group
     * */
    int current = 0, last = 0, n = 0, m = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (i) {
            if (current <= (m - last)) {
                last += current;
            } else {
                last = current;
                cnt++;
            }
        } else {
            last = current;
            cnt++;
        }
    }
    cout << cnt << '\n';
}

void sol() {

}
