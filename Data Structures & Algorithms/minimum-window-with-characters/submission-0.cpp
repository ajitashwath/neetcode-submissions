class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), cnt = t.size(), left = 0, minn = INT_MAX, start = 0;
        vector<int> character(256, 0);
        for(char c : t) character[c]++;
        for(int right = 0; right < n; right++) {
            if(character[s[right]] > 0) cnt--;
            character[s[right]]--;
            while(cnt == 0) {
                if(right - left + 1 < minn) {
                    minn = right - left + 1;
                    start = left;
                }
                character[s[left]]++;
                if(character[s[left]] > 0) cnt++;
                left++;
            }
        }
        if(minn == INT_MAX) return "";
        return s.substr(start, minn);
    }
};
