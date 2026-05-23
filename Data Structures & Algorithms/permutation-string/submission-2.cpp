class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> s1c(26, 0), s2c(26, 0);
        for(int i = 0; i < s1.length(); i++) {
            s1c[s1[i] - 'a']++;
            s2c[s2[i] - 'a']++;
        }
        for(int i = 0; i < s2.length() - s1.length(); i++) {
            if(s1c == s2c) return true;
            s2c[s2[i] - 'a']--;
            s2c[s2[i + s1.length()] - 'a']++;
        }
        return s1c == s2c;
    }
};