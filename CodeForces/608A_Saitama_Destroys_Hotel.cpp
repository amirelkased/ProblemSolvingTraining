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
     * Dependant on Tracing the change of every moving
     * */
    int n = 0, s = 0, SumSec = 0;
    cin >> n >> s;
    int arr[n][2];
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    reverse(arr, arr + n);
    SumSec = s - arr[0][0];
    if (arr[0][1] > SumSec)
        SumSec = arr[0][1];
    for (int i = 1; i < n; i++) {
        SumSec += (arr[i - 1][0] - arr[i][0]);
        if (SumSec < arr[i][1]) {
            SumSec = arr[i][1];
        }
    }
    cout << SumSec+arr[n-1][0] << '\n';
}

void sol() {

}
