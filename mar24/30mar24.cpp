

class Solution {

public:

    int subarraysWithKDistinct(vector<int>& A, int K) {

        unordered_map<int, int> counts;

        int n = 0;

        int start = 0;

        int prefix = 0;

        for (int i = 0; i < A.size(); ++i) {

            counts[A[i]] += 1;

            while (counts.size() > K) {

                auto it = counts.find(A[start]);

                if (--it->second == 0) {

                    counts.erase(it);

                }

                ++start;

                prefix = 0;

            }

            if (counts.size() == K) {

                while (start < i) {

                    auto& c = counts[A[start]];

                    if (c > 1) {

                        --c;

                        ++start;

                        ++prefix;

                    } else {

                        break;

                    }

                }

                n += (1 + prefix);

            }

        }

        return n;

    }

};
        
    
