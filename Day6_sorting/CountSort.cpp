//this is countsort of an array 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
 void countsort(vector<int>& arr, int n) {
    vector<int> temp(10, 0);
    for(int i = 0; i < n; i++) {
        temp[arr[i]]++;
    }
    for(int i = 1; i < 10; i++) {
        temp[i] += temp[i - 1];
    }
    vector<int> b(n);
    for(int i = n - 1; i >= 0; i--) {
        b[--temp[arr[i]]] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        arr[i] = b[i];
    }
    cout << "the count sorted array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countsort(arr, n);
    return 0;
}
