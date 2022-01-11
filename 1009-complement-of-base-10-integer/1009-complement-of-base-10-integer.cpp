class Solution {
public:
    int bitwiseComplement(int n) {
        int complement[32]={0},i=0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            int bit=n&1;
            if(bit==1){
                complement[i]=0;
            }
            else{
                complement[i]=1;
            }
            n>>=1;
            i++;
        }
        int sum=0;
        for(int i=0;i<32;i++){
                sum+= (complement[i])*pow(2,i);
        }
        return sum;
    }
};