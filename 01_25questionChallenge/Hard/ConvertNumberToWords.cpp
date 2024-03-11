
#include <bits/stdc++.h>
string numtoWord(int n, string suffix){
    vector<string> ones = {"","one ", "two ", "three ", "four ", "five ", "six ",
                           "seven ", "eight ", "nine ","ten ", "eleven ", "twelve ",
                           "thirteen ", "fourteen ", "fifteen ", "sixteen ",
                           "seventeen ", "eighteen ", "nineteen "};
vector<string> tens= {"", "","twenty ", "thirty ",  "forty ",
                       "fifty ", "sixty ",  "seventy ","eighty ", "ninety "};
            string ans;

            if(n>19){
               ans+=tens[n/10]+ones[n%10];
            }else{
                ans+=ones[n];
            }
            if(n){
                  ans+=suffix;
            }
            return ans;
}
string handleAll(int n)
{
    
   string res = numtoWord((n/10000000),"crore ");
   res += numtoWord((n/100000)%100,"lakh ");
   res += numtoWord((n/1000)%100,"thousand ");
   res += numtoWord((n/100)%10,"hundred ");

   if(n>100 && n%100){
       res += "and ";
   }
   res += numtoWord((n%100),"");
   return res;

}
