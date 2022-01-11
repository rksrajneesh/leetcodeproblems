class Solution {
public:
    int addDigits(int num) {
        int r,sum=10;
        while(sum>9){
            sum=0;
            while(num!=0){
                r = num%10;
                sum+=r;
                num=num/10;
            }
            if(sum<10){
                return sum;
            }
            else{
                num=sum;
            }
            ++sum;
        }
        return sum;
    }
};