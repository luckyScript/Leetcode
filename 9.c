bool isPalindrome(int x) {
    int a = x, rs = 0;
    while(a) {
        rs = rs * 10 + a%10;
        a /= 10;
    }
    if(rs == x && rs >= 0) {
        return true;
    }
    return false;
}
