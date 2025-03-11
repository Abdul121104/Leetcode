class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;

        for (int i = left; i <= right; i++) {
            if (i < 2) continue; 
            
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) primes.push_back(i);
        }

        if (primes.size() < 2) return {-1, -1};
        vector<int> res = {-1, -1};
        int minDiff = INT_MAX;

        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                res = {primes[i - 1], primes[i]};
            }
        }

        return res;
    }
};
