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
//or
class Solution{
    public:
 int grayToBinary(int n) {
    std::string binary = "";
    for (int i = 0; i <= 31; i++) {
        if (n & (1 << i)) {
            binary = '1' + binary;
        } else {
            binary = '0' + binary;
        }
    }

    // Find the index of the first '1'
    int idx = 0;
    for (int i = 0; i <= 31; i++) {
        if (binary[i] == '1') {
            idx = i;
            break;
        }
    }
    // Extract the relevant part of the binary string
    binary = binary.substr(idx, 32 - idx);

    std::string ans = "";
    ans += binary[0];
    int a = binary[0] - '0';
    for (int i = 1; i < binary.length(); i++) { // Changed loop termination condition
        int x = binary[i] - '0';
        if (a ^ x) {
            ans = ans + '1';
            a = 1;
        } else {
            ans = ans + '0';
            a = 0;
        }
    }

    int an = 0;
    for (int i = 0; i < ans.size(); i++) {
        an = an * 2 + (ans[i] - '0');
    }
    return an;
}
};
