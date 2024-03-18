/* Problem statement

Ninja was planning to propose to his crush, Nina, with his spectacular martial arts moves. But Nina was more interested in numbers and divisors, so she gave Ninja a challenge to complete. If Ninja solves it, only then she will date him.

Nina gave him an array of positive integers, ‘ARR’ and asked him to find the sum of divisors of the integers in ‘ARR’ with exactly four divisors. In case there is no such integer with exactly four divisors, then the answer is 0. Ninja has been struggling for a very long time, so he needs your help to solve the problem.
 */
//brute force
#include <bits/stdc++.h> 
int sumFourDivisors(vector<int> &arr, int n)
{
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        int temp=0;
        count=0;
        for(int j=1;j<=arr[i];j++){
           if(arr[i]%j==0){
               count++;
               temp+=j;
               
           }
           if(count>4){
               break;
           }
         
        }
        if(count==4){
           ans+=temp;
        }
    }
    return ans;
}

//optimized not mine but i dont knwo if it work or not you need to check adarsh chat gpt is belwo
#include <vector>
#include <cmath>

int sumFourDivisors(std::vector<int> &arr, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        int temp = 0;
        int sqrt_val = std::sqrt(arr[i]); // Calculate square root only once
        for (int j = 1; j <= sqrt_val; j++) {
            if (arr[i] % j == 0) {
                count += 2; // Count both divisors
                temp += j + arr[i] / j; // Add both divisors
            }
        }
        if (sqrt_val * sqrt_val == arr[i]) { // If the number is a perfect square, we counted its square root divisor twice
            count--;
            temp -= sqrt_val;
        }
        if (count == 4) {
            ans += temp;
        }
    }
    return ans;
}
