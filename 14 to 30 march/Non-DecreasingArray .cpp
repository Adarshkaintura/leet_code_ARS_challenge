// You have been given an integer array/list 'ARR' of size 'N'. Write a solution to check if it could become non-decreasing by modifying at most 1 element.

// We define an array as non-decreasing, if ARR[i] <= ARR[i + 1] holds for every i (0-based) such that (0 <= i <= N - 2).
#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{

    int count=0;
   for(int i=1;i<n;i++){
       if(arr[i-1]>arr[i]){
           count++;
           if(arr[i-2]<=arr[i] || i-2<0){
               arr[i-1]=arr[i];
           }else{
               arr[i]=arr[i-1];
           }
       }
   }
    return count<=1;
}
