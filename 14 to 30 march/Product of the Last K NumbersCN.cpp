
#include <bits/stdc++.h> 
vector<int> solve( int q, vector<pair<int, int>> queries ) 
{
	vector<int> arr;
	vector<int> ans;
	for(int i=0;i<q;i++){
		int a=queries[i].first;
		int b=queries[i].second;
		if(a==0){
			arr.push_back(queries[i].second);
		}else{
			int prod=1;
			int limit=arr.size()-b-1;
              for(int i=arr.size()-1;i>limit;i--){
                   prod*=arr[i];
			  }
			  ans.push_back(prod);
		}
	}
	return ans;
}
//little optimus using prefix prod 
#include <vector>
using namespace std;

vector<int> solve(int q, vector<pair<int, int>> queries) {
    vector<int> prefixProduct = {1}; // Initialize with 1 to handle the first multiplication
    vector<int> ans;

    for (int i = 0; i < q; i++) {
        int type = queries[i].first;
        int value = queries[i].second;

        if (type == 0) {
            // Insertion query
            prefixProduct.push_back(prefixProduct.back() * value);
        } else {
            // getProduct query
            int product = prefixProduct.back() / prefixProduct[prefixProduct.size() - value - 1];
            ans.push_back(product);
        }
    }

    return ans;
}
