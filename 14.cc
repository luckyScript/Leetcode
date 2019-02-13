class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int n = strs.size();
        if(n == 0)
            return result;
        int max = strs[0].size(); // string len
        for(int i = 0; i < max; i++) {
            char c = strs[0][i];
            for(int j = 0; j < n; j++) {
                if(strs[j][i] && strs[j][i] != c) {
                    // cout << c << " != " << strs[j][i] << endl;
                    return result;
                }
                c = strs[j][i];
            }
            result.push_back(c);
        }
        return result;
    }
};
