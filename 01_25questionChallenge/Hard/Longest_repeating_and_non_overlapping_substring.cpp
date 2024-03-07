string longestSubstring(string str, int n) {
    vector<vector<int>> LRS(n + 1, vector<int>(n + 1, 0));

    string res = "";
    int res_length = 0;
    int index = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (str[i - 1] == str[j - 1] && LRS[i - 1][j - 1] < (j - i)) {
                LRS[i][j] = LRS[i - 1][j - 1] + 1;

                if (LRS[i][j] > res_length) {
                    res_length = LRS[i][j];
                    index = max(i, index);
                }
            } else {
                LRS[i][j] = 0;
            }
        }
    }

    if (res_length > 0) {
        for (int i = index - res_length; i < index; i++) {
            res += str[i];
        }
        return res;
    }

    return "-1";
}
