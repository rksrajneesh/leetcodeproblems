class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int diff = target-nums[i];
            if(m.find(diff)!=m.end() && m.find(diff)->second!=i){
                v.push_back(m.find(diff)->second);
                v.push_back(i);
                return v;
            }
            m.insert({nums[i],i});
        }
        return v;
    }
};