#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int price[100];
    for(int i = 0; i < n; i++)
        cin >> price[i];

    int dp[100];
    dp[0] = 0;

    for(int i = 1; i <= n; i++) {
        int best = 0;

        for(int j = 0; j < i; j++) {
            best = max(best, price[j] + dp[i-j-1]);
        }

        dp[i] = best;
    }
    cout << dp[n];
}
