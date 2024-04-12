class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;
        int keep = num.size() - k;
        
        for (char digit : num) {
            while (!result.empty() && result.back() > digit && k > 0) {
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        result.resize(keep);
        int leading_zeros = 0;
        while (leading_zeros < result.size() && result[leading_zeros] == '0') {
            leading_zeros++;
        }
        return leading_zeros == result.size() ? "0" : result.substr(leading_zeros);
    }
};
