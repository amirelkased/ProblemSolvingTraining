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
    int n, k, start = 0, end = 0;
    bool T = false;
    cin >> n >> k;
    string line;
    cin >> line;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == 'G' && !T) {
            for (int j = i; j < n; j += k) {
                if (line[j] == '#') {
                    cout << "NO\n";
                    return 0;
                }
                if(line[j]=='T'){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
        if(line[i]=='T')
            break;
    }
    for (int i = line.size()-1; i >-1; i--) {
        if (line[i] == 'G') {
            for (int j = i; j > -1; j -= k) {
                if (line[j] == '#') {
                    cout << "NO\n";
                    return 0;
                }
                if(line[j]=='T'){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}

void sol() {

}
