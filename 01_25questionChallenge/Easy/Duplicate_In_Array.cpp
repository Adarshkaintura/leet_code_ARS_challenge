int findDuplicate(vector<int> &arr) 
{
    int n=arr.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++){
           temp[arr[i]]++;
           if(temp[arr[i]]==2){
               return arr[i];
           }
    }
    return -1;
}
