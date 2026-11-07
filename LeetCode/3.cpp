class Solution {
public:
    string a;
    pair<int, int> exist(char c){
        for (int i=0; i<a.size(); i++) if (a[i]==c) return {1, i};
        return {0, 0};
    }

    int lengthOfLongestSubstring(string s) {
        int ans=0;
        for (int i=0; i<s.size(); i++){
            auto e = exist(s[i]);
            a += s[i];
            if (e.first) {
                a = a.substr(e.second+1);
            }
            int ma = a.size();
            ans = max(ans, ma);
        }
        return ans;

    }
};
