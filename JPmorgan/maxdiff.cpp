/* 1. Ayush was copying from Rahit in the exam. So, Rahit told him to change the answers a little bit so that the examiner cannot find the fraud. But silly Ayush in the way started to change all the answers that were needed. He shuffled the letters in each word in a way where the maximum number of letters were misplaced. For a given word, find the maximum difference that Ayush can generate between his answer and Rahit’s answer. Suppose Rahit wrote “car” for an answer, Ayush can write “acr” with difference 2, or “arc” with difference 3.
Note that: The letters are all in lowercase.
Input Format:
First line containing an integer n, number of words. Then, n numbers of lines as the query words.
Output:
N number of lines with an integer each denoting possible maximum difference.
Sample Input:
4
abababa
bbj
kj
kk
Sample Output: 6 2 2 0
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int maxdiff(string s1){
    int j=0;
    string s2=s1;
    for(int i=1;i<s1.size();i++){
        if(j<s1.size()){
              if(s2[i]!=s2[j]){
        swap(s2[i],s2[j]);
        j=i+2;
      }
        }
     
    }
    int count=0;
    for(int i=0;i<s1.size();i++){
         if(s1[i]!=s2[i]){
            count++;
         }
    }
    return count;
}
int main(){
    string s1;
    int n;
    cout<<"Enter the total no ofstring";
    cin>>n;
    int i=0;
    vector<int> arr(n);
    while(n){
        cin>>s1;
        arr[i++]=maxdiff(s1);
        n--;
    }
    cout<<"count is:";
    for(auto it:arr){
        cout<<it;
    }
    return 0;
}
