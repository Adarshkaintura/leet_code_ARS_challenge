
//time compleity=nlogn
bool findPair(int arr[], int size, int n) {
     sort(arr, arr + size);

    int l = 0;
    int h = 0;

    while (l < size && h<size) {
        int diff =arr[h] - arr[l];
        
         if (diff == n && l != h) {
            return true;
        } else if (diff < n) {
            h++; 
        } else {
            l++; 
        }
    }
    return false;
}
//another approach will take n square time complexity using 2 for loops
