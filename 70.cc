class Solution {
public:
    int climbStairs(int n, int a = 1, int b = 1) {
        if(n == 1)
            return b;
        return climbStairs(n-1, b, a+b);
    }
};
