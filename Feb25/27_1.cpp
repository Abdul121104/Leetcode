class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return 0;
        unordered_map<int, int> indexMap;
        for (int i = 0; i < n; ++i) {
            indexMap[arr[i]] = i;
        }

        vector<vector<int>> dp(n, vector<int>(n, 2));
        int maxLength = 0;
        for (int i = 2; i < n; ++i) {
            for (int j = 1; j < i; ++j) {
                int target = arr[i] - arr[j]; 
                if (target < arr[j] && indexMap.find(target) != indexMap.end()) {
                    int k = indexMap[target]; 
                    dp[j][i] = dp[k][j] + 1;
                    maxLength = max(maxLength, dp[j][i]);
                }
            }
        }

        return maxLength > 2 ? maxLength : 0;
    }
};
