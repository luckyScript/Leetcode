class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool d = false;
        for(auto c : s) {
            if(d && c != ' ') {
                d = false;
                len = 0;
            }
            if(c == ' ')
                d = true;
            else
                len++;
        }
        return len;
    }
};
