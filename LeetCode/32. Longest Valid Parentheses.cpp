class Solution {
public:
    int longestValidParentheses(string s) {

        int l = 0;
        vector<int> a;
        a.push_back(-1);

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '('){
                a.push_back(i);
            }
            else{
                a.pop_back();
                if (a.size()==0){
                    a.push_back(i);
                } else {
                    l = max(l, i-a[a.size()-1]);
                }
            }

        }
        return l;
        
    }
};