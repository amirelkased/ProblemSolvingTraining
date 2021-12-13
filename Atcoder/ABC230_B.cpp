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

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    RateForNow_NEWBIE_1044_357
    string x, y;
    y = "oxxoxxoxxoxxoxxoxxoxxoxx";
    cin >> x;
    if (x[0] == 'o') {
        if (y.substr(0, x.size()) == x){
            cout << "Yes\n";
            return 0;
        }else{
            cout << "No\n";
            return 0;
        }
    }else if (x[0] == 'x') {
        if(x[1]=='x') {
            if (y.substr(1, x.size()) == x) {
                cout << "Yes\n";
                return 0;
            } else {
                cout << "No\n";
                return 0;
            }
        }else {
            if (y.substr(2, x.size()) == x) {
                cout << "Yes\n";
                return 0;
            } else {
                cout << "No\n";
                return 0;
            }
        }
    }
}

