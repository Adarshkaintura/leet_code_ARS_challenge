bool areIsomorphic(string &str1, string &str2)
{
    if(str1.size()!=str2.size()){
        return false;
    }
   unordered_map<char,char>mp,mp2;
   for(int i=0;i<str1.size();i++){
       if (mp.find(str1[i]) != mp.end() && mp[str1[i]]!=str2[i]) {
         return false;
       }
       if(mp2.find(str2[i])!=mp2.end() && mp2[str2[i]]!=str1[i]){
           return false;
       }
       mp[str1[i]]=str2[i];
       mp2[str2[i]]=str1[i];
   }
  

   return true;
}
