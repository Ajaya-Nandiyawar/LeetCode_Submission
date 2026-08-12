class Solution {
public:
    int arrayPairSum(vector<int>& values) {
        sort(values.begin(), values.end());

        int total = 0;

        for (int i = 0; i < values.size(); i += 2) {
            total += values[i];
        }

        return total;
    }
};