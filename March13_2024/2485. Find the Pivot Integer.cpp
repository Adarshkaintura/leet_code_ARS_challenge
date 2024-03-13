class Solution {
public:
   int pivotInteger(int n) {
        vector<int> arr(n + 1);
        int sum = 0;
    
        for(int i = 1; i <= n; i++) {
            sum += i;
            arr[i] = sum;
        }

        sum = 0;
        vector<int> arr2(n + 1);
        for(int i = n; i >= 1; i--) {
            sum += i;
            arr2[i] = sum;
        }

        for(int i = 1; i <= n; i++) {
            if(arr[i] == arr2[i]) {
                return i;
            }
        }
        
        return -1; // No pivot integer found
    }
};
