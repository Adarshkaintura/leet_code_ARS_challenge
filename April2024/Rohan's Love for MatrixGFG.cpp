class Solution {
  public:
  int fib(int n){
      if(n==0||n==1){
          return n;
      }
      return fib(n-1)+fib(n-2);
  }
    int firstElement(int n) {
       if(n==1||n==2){
           return 1;
       }
      int mod=1000000007;
       int a=1;
       int b=1;
       int c;
       for(int i=0;i<n-2;i++){
           c=(a+b)%mod;
           b=a%mod;
           a=c%mod;
           
       }
       return c%mod;
    }
};
