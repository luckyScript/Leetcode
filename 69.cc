class Solution {
public:
    int mySqrt(int x) {
        cout << x << endl;
        int i = 0;
        for(;i*i <= x && i*i>=0; i++);
        return i-1;
    }
};
