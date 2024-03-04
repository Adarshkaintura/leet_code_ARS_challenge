/* Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).*/

//it is brute force approach
 long long int inversionCount(long long arr[], long long N)
    {
      long long int c=0;
      for(int i=0;i<N-1;i++){
          for(int j=i+1;j<N;j++){
              if(arr[i]>arr[j]){
                  c++;
              }
          }
      }
      return c;
    }
