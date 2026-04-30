#include <iostream>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    int w[100], v[100];
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) cin >> v[i];

    int dp[100][100] = {0};

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= W; j++) {
            if(w[i-1] <= j)
                dp[i][j] = max(v[i-1] + dp[i-1][j - w[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][W];
}
