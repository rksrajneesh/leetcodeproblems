class Solution {
public:
    int myAtoi(string s) {
        int i;
        if(s.empty()){
            return 0;
        }
        for(i=0;i<s.length();i++){
            if(s[i]=='\x20'){
                continue;
            }
            else{
                break;
            }
        }
        if(i==s.length()){
            return 0;
        }
        int k;
        stringstream ss;
        ss<<s;
        ss>>k;
        return k;
    }
};