class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];
        bool odd = false;

        for (int i : nums1) {
            mn = min(mn, i);

            if (i % 2 == 1)
                odd = true;
        }

        if (mn % 2 == 1)
            return true;

        return !odd;
    }
};