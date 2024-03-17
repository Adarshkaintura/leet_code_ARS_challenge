/* You have an integer array ‘A’ of the form of [x, x+1, x+2, x+3, …….]. As the array is vast in size, you are given both endpoints of the array, i.e., If you are given two integers, ‘L’ and ‘R’, the array ‘A’ will be [L, L+1, L+2, ……., R-1, R]. Your task is to find the maximum possible value of ‘X’ such that the following two conditions hold.

a ⊕ b = X, where ⊕ denotes bitwise xor operation.
Both numbers ‘a’ and ‘b’ belong to the array ‘A’.

*/
int maxXor(int L, int R)
{
  int a=L^R;
  int count=0;
  while(a){
      a=a>>1;
      count++;
  }
 a=(1<<count)-1;
 return a;
}
