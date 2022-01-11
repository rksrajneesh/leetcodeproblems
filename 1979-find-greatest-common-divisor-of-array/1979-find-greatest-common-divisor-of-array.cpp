class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max,min;
        max=INT_MIN;
        min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max){
                max=nums[i];
            }
            if(nums[i]<=min){
                min=nums[i];
            }
        }
        while(max!=min){
            if(max>min){
                max-=min;
            }
            else{
                min-=max;
            }
        }
        return max;
    }
};