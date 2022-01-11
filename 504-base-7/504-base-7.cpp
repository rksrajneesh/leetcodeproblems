class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        string r = "";
        string sgn = "";
        if (num < 0) {
            num = -num;
            sgn = "-";
        }
        while (num > 0) {
            r = std::to_string(num % 7) + r;
            num /= 7;
        }
        return sgn + r;
    }
};