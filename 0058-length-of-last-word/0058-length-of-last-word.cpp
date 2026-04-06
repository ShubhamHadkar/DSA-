class Solution {
public:
    int lengthOfLastWord(string s) {
        int r = 0;
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        while (i >= 0 && s[i] != ' ') {
            r++;
            i--;
        }

        return r;
    }
};