class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<=n;i++){
            if(pow(4,i) > n){
                return false;
            }
            else if(pow(4,i) == n){
                return true;
            }
        }
        return false;
    }
};