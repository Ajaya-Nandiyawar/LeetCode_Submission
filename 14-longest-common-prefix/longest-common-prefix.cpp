class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < p.size() && j < strs[i].size() && p[j] == strs[i][j]) j++;
            p = p.substr(0, j);
        }
        return p;
    }
};