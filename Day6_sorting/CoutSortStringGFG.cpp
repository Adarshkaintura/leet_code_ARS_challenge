  void countsort(vector<char>& arr, int n) {
    vector<int> temp(26, 0);
    for (int i = 0; i < n; i++) {
        temp[arr[i] - 'a']++;
    }
    for (int i = 1; i < 26; i++) {
        temp[i] += temp[i - 1];
    }
    vector<char> b(n);
    for (int i = n - 1; i >= 0; i--) {
        b[--temp[arr[i] - 'a']] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = b[i];
    }
}

string countSort(string arr1) {
    vector<char> arr(arr1.size());
    for (int i = 0; i < arr1.size(); i++) {
        arr[i] = arr1[i];
    }
    countsort(arr, arr.size());
    for (int i = 0; i < arr1.size(); i++) {
        arr1[i] = arr[i];
    }
    return arr1;
}
