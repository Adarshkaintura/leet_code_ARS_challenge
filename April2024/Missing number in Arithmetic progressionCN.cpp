int missingNumber(vector<int> &arr, int n) 
{
    // Calculate the common difference of the arithmetic sequence
    int commonDifference = (arr[n - 1] - arr[0]) / n;

    // Initialize the left and right pointers for binary search
    int left = 0, right = n - 1;

    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the element at mid position is in its correct place
        if (arr[mid] == arr[0] + mid * commonDifference)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // The missing number will be at left index
    return arr[0] + left * commonDifference;
}
