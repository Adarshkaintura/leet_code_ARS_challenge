//brute force 
vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            
          for(int i=0;i<text.size();i++){
              if(pattern[0]==text[i]){
                  int k=i;
                  ans.push_back(i+1);
                  for(int j=0;j<pattern.size();j++){
                      if(text[k++]!=pattern[j]){
                          ans.pop_back();
                          break;
                      }
                  }
              }
          }
          return ans;
        }
//optimal will do later 
