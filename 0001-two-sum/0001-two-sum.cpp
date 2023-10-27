class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>vec;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(m.find(diff)!=m.end())
            {
                vec.push_back(m[diff]);
              vec.push_back(i);  
            }
            m[nums[i]]=i;
        }
        return vec;
        
    }
};