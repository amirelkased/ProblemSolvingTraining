#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    vector<pair<int, int>> ve;
    vector<int> result;
    for (int temp = 0, i = 1; i <= n; i++) {
        cin >> temp;
        ve.emplace_back(make_pair(temp, i));
    }
    std::sort(ve.begin(), ve.end());
    int cnt = 0;
    for (auto it: ve) {
        cnt += it.first;
        if (cnt <= k) {
            result.push_back(it.second);
        }else
            break;
    }
    cout << result.size() << '\n';
    for(auto it:result){
        cout << it << ' ';
    }
}