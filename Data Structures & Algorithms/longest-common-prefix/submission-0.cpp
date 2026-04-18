class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string str1;
        for (int i = 0; i < strs[0].size(); i++) {
            int j = 1;
            while (j < strs.size() && i < strs[j].size() && strs[0][i] == strs[j][i]) j++;
            if (j == strs.size()) str1.push_back(strs[0][i]);
            else break;
        }
        return str1;
    }
};