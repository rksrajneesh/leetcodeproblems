class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        int a = 0; 
        int b = 0;

        while (i >= 0 || j >= 0) {
            while (i >= 0) {
                if (s[i] == '#') {
                    a++;
                    i--;
                }else if (a > 0) {
                    a--;
                    i--;
                }else {
                    break;
                }
            }

            while (j >= 0) {
                if (t[j] == '#') {
                    b++;
                    j--;
                }else if (b > 0) {
                    b--;
                    j--;
                }else {
                    break;
                }
            }

            if (i >= 0 && j >= 0 && s[i] != t[j]) {
                return false;
            }

            if (i >= 0 && j < 0 || i < 0 && j >= 0) {
                return false;
            }

            i--;
            j--;
        }
        return true;
    }
};