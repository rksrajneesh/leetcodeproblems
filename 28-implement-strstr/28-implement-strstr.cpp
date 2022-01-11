class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        else if(haystack.find(needle)){
            return haystack.find(needle);
        }
        else if(needle.length()<=haystack.length() && haystack[0]==needle[0]){
            return 0;
        }
        else{
            return -1;
        }
    }
};