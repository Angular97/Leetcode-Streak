class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = ""; int lvl = 0;

        for (auto x : s) {

            if (x == '(') {
                if (lvl > 0)
                    ans += x;
                lvl++;
            } else {
                lvl--;
                if (lvl > 0)
                    ans += x;
            }
        }
        return ans;
    }
};