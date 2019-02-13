class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty()) {
            digits.push_back(1);
            return digits;
        }
        if(digits.back() != 9) {
            digits[digits.size()-1]++;
            return digits;
        } else {
            digits.pop_back();
            vector<int> newvec = plusOne(digits);
            newvec.push_back(0);
            return newvec;
        }
    }
};
