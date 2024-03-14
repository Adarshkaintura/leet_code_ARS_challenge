// Consider all numbers from 1 to ‘N’, your task is to find the sum of gcd of all pairs (i, j) such that 1 <= i < j <= N.

// For example for N = 3, all pairs are { (1, 2), (1, 3), (2, 3) }.

// Note :

// Gcd of two numbers (X, Y) is defined as the largest integer that divides both ‘X’ and ‘Y’
//below mthod is partially accepted becuase of n square logn time complexity you need find out a good approach
long long gcd(int a,int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long gcdSum(int n)
{

    long long count=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            count+=gcd(i,j);
        }
    }
    return count;
}
