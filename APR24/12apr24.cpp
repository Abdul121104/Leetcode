class Solution {
public:
    int trap(vector<int>& h) {
        int sum = 0, n = h.size();
        int lmax[n], rmax[n];
        lmax[0] = h[0];
        for (int i = 1; i < n; i++) lmax[i] = max(lmax[i - 1], h[i]);
        rmax[n - 1] = h[n - 1];
        for (int i = n - 2; i >= 0; i--) rmax[i] = max(rmax[i + 1], h[i]);
        for (int i = 1; i < n - 1; i++) {
            int water = min(lmax[i], rmax[i]) - h[i];
            if(water>0) sum+=water;
        }
        return sum;
    }
};
