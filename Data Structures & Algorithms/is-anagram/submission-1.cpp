class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        map<char, int> hs;
        map<char, int> ht;
        for (int i = 0; i<s.size();i++){
            hs[s[i]]++;
        }
        for (int i = 0; i<t.size();i++){
            ht[t[i]]++;
        }
        return hs==ht;
    }
};
