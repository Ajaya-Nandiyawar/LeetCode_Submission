class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mn = INT_MAX, ans = 0;
        for (int x : a) {
            if (x < mn) mn = x;
            else ans = max(ans, x - mn);
        }
        return ans;
    }
};