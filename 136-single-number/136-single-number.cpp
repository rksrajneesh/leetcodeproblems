class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]==nums[i]){
                j=j+2;
                ++i;
            }
            else{
                return nums[j];
            }
        }
        return nums[j];
    }
};