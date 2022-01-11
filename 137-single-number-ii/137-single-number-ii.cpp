class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]==nums[i]){
                j=j+3;
                i=i+2;
            }
            else{
                return nums[j];
            }
        }
        return nums[j];
    }
};