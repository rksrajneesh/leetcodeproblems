class Solution {
public:
    bool isPalindrome(int x) {
        long long int r,num,rev=0;
        num=x;
        while(x!=0){
            r=x%10;
            rev = (rev*10) + r;
            x/=10;
        }
        if(num==rev and num>=0){
            return true;
        }
        else{
            return false;
        }
    }
};