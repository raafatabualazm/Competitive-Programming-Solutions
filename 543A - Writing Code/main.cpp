#include <bits/stdc++.h>

using namespace std;
long long dp[2][510][510];
long long bugs[510];
int main() {

    long long n, m, b, mod, it;
    cin >> n >> m >> b >> mod;
    for (int i = 0; i < n; i++)
    {
        cin >> bugs[i];
    }
    for (int h = 0; h <= b; h++)
    {
        dp[0][0][h] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        it = i & 1;
        for (int j = 0; j <= m; j++)
        {
            for (int k = 0; k <= b; k++)
            {
                dp[it][j][k] = dp[(it - 1) & 1][j][k];
                if (j > 0  && k >= bugs[i - 1])
                {
                    dp[it][j][k] += dp[it][j - 1][k - bugs[i - 1]];

                }
                dp[it][j][k] %= mod;
            }
        }
    }

    cout << dp[n & 1][m][b];
    return 0;
}
