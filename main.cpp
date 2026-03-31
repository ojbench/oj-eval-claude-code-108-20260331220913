#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // dp[i] represents the maximum value with weight i
    vector<int> dp(m + 1, 0);

    for (int i = 0; i < n; i++) {
        int p, w, v;
        cin >> p >> w >> v;

        // Binary representation optimization
        // Split p items into groups: 1, 2, 4, ..., 2^k, remainder
        int k = 1;
        while (k < p) {
            // Process k items as one group
            for (int j = m; j >= k * w; j--) {
                dp[j] = max(dp[j], dp[j - k * w] + k * v);
            }
            p -= k;
            k *= 2;
        }

        // Process remaining items
        if (p > 0) {
            for (int j = m; j >= p * w; j--) {
                dp[j] = max(dp[j], dp[j - p * w] + p * v);
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}
