/* You are given two integers, ‘N’ and ‘K’. Assume numbers from 1 to ‘N’ are arranged such that all odd numbers (in ascending order) are present first and then come to all even numbers (also in ascending order).

You need to find the integer at position ‘K’ (numbering of positions starts from 1).
For example:

You are given ‘N’ as 7 and ‘K’ as 4.  Numbers from 1 to 7 are arranged as [1, 3, 5, 7, 2, 4, 6], and the number at position 4 is 7. So, the answer is 7.

*/
#include <bits/stdc++.h> 
int findInteger(int n, int k) 
{
    if(k<=((n+1)/2))
    {
        return (2*k)-1;
    }else{
        return 2*(k-((n+1)/2));
    }
}
