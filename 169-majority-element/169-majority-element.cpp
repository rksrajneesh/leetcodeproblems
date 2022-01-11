class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0,count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[j]==nums[i]){
                ++count;
                if(count>(nums.size()/2)){
                    break;
                }
                ++j;
            }
            else{
                ++j;
                count=1;
            }
        }
        return nums[j];
    }
};