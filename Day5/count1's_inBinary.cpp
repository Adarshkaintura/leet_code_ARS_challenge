#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    int countBits(int n){
        int count=0;
        while(n>0){
            int i=n%2;
            n=n/2;
            if(i==1){
                count++;
            }
        }
        return count;
    }

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
