class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        vector<int> v;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                v.push_back(nums[j]);
                j=j+1;
                if(j==(nums.size()-1)){
                    v.push_back(nums[j]);
                }
            }
            else{
                j=j+2;
                if(j==(nums.size()-1)){
                    v.push_back(nums[j]);
                }
                ++i;
            }
        }
        return v;
    }
};