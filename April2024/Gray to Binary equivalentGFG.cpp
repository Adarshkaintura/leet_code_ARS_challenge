class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
       string gray=bitset<32>(n).to_string();
       string binary="";
       binary+=gray[0];
       for(int i=1;i<gray.size();i++){
           binary+=binary[i-1]==gray[i]?'0':'1';
       }
      return stoi(binary,NULL,2);
    }
};
