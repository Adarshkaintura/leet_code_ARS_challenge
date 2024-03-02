class Solution {
public:
static bool compare(string a,string b){
	    string t1=a+b;
	    string t2=b+a;
	    return t1>t2;
	}
	string printLargest(int n, vector<string> &arr) {
	  sort(arr.begin(),arr.end(),compare);
        if (arr[0] == "0") {
            return "0";
        }
	 string ans="";
	  for(string &res:arr){
	      ans+=res;
	  }
      
	  return ans;
	}
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(int n:nums){
            ans.push_back(to_string(n));
        }
       
     return printLargest(ans.size(), ans);
    }
};
