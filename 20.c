bool isValid(char* s) {
    int level=0;
    char* ps = s;
    while(*s){
        if (*s == '(' || *s == '[' || *s == '{') ps[level++] = *s;
        if (*s == ')' || *s == ']' || *s == '}') {
            if(ps [level-1] == *s-1 && ps[level-1] == '(') {
                level--;
            } else if (ps [level-1] == *s-2) {
                level--;
            }
            else return false;
        }
        s++;
    }
    return !level;
}
