vector<vector<int>> prf(n + 2, vector<int>(m + 2, 0));
        loop(i, 1, n + 1)
        {
            loop(j, 1, m + 1)
            {
                prf[i][j] = ar[i - 1][j - 1] + prf[i - 1][j] + prf[i][j - 1] - prf[i - 1][j - 1];
            }
        }
