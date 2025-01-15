class Solution {
public:
    int minimizeXor(int num1, int num2) {
        string s1=bitset<32>(num1).to_string(), s2=bitset<32>(num2).to_string();
        int curr=count(s2.begin(), s2.end(), '1');
        for (char &c:s1) if (curr > 0 && c == '1') curr--; else if (c=='1') c='0';
        for (int i=31;i>=0 && curr>0;i--) if(s1[i]=='0') s1[i]='1',curr--;
        return bitset<32>(s1).to_ulong();
    }
};
