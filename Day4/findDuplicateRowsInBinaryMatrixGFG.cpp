 vector<int> repeatedRows(vector<vector<int>>& matrix, int M, int N) {
    vector<int> result;
    unordered_set<int> seenRows;

    for (int i = 0; i < M; ++i) { 
        int decimal = 0;
        for (int j = 0; j < N; ++j) {
            decimal = (decimal << 1) | matrix[i][j];
        }
        if (seenRows.count(decimal)) {
            result.push_back(i); 
        } else {
            seenRows.insert(decimal);
        }
    }

    return result;
}
