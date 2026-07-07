#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<long long> a(n);
        long long total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        long long parejas = total * (total - 1) / 2;
        long long mismas = 0;
        for (auto x : a) {
            mismas += x * (x - 1) / 2;
        }

        cout << (parejas - mismas) << "\n";
    }
    return 0;
}
