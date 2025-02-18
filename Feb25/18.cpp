class Solution {
    bool isMatch(string num, string pattern) {
        for (int i = 0; i < pattern.size(); i++) {

            if (pattern[i] == 'I' && num[i] > num[i + 1] ||
                pattern[i] == 'D' && num[i] < num[i + 1])
                return false;
        }
        return true;
    }

public:
    string smallestNumber(string pattern) {
        string ans = "";
        for (int i = 1; i <= pattern.size() + 1; i++)
            ans.push_back(i + '0');

        while (!isMatch(ans, pattern)) {
            next_permutation(ans.begin(), ans.end());
        }
        return ans;
    }
};
