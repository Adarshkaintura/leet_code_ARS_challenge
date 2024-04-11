int NthRoot(int n, int m) {
 
  if(n<=0 || m<0){
   return -1;
  }
     double a=pow(m,1.0/n);
    int roundans=round(a);

   if(pow(roundans,n)==m){
       return roundans;
   }
   return -1;
}
