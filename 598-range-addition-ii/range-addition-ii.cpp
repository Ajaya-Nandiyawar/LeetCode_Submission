class Solution {
public:
    int maxCount(int rows, int cols, vector<vector<int>>& ops) {
        for (auto op : ops) {
            rows = min(rows, op[0]);
            cols = min(cols, op[1]);
        }

        return rows * cols;
    }
};