class Solution {
public:
    bool isMatch(string text, string pattern) {
        if(text == pattern) return true;
        if(pattern == "") return false;
        if(pattern[1] == '?')
          return matchQuestion(text, pattern);
        if(pattern[1] == '*')
          return matchStar(text, pattern);
        return matchOne(text[0], pattern[0]) && isMatch(text.substr(1), pattern.substr(1));
    }
    bool matchOne(char text, char pattern) {
        if(!pattern) return true;
        if(!text) return false;
        if(pattern == '.') return true;
        if(pattern == text) return true;
        return false;
    }
    bool matchStar(string text, string pattern) {
      return (matchOne(text[0], pattern[0])) && isMatch(text.substr(1), pattern) || isMatch(text, pattern.substr(2));
    }

    bool matchQuestion(string text, string pattern) {
      return matchOne(text[0], pattern[0])
        && isMatch(text.substr(1), pattern.substr(2))
        || isMatch(text, pattern.substr(2));
    }
};
