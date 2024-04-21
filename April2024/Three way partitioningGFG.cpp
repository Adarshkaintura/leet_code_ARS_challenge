 void threeWayPartition(vector<int>& array,int a, int b)
    {
       int n = array.size();
    int low = 0, high = n - 1;
    
    // Partition the array into three parts
    for (int i = 0; i <= high;) {
        if (array[i] < a) {
            swap(array[i], array[low]);
            i++;
            low++;
        } else if (array[i] > b) {
            swap(array[i], array[high]);
            high--;
        } else {
            i++;
        }
    }
    }
};
