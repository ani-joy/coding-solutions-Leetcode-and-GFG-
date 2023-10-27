class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        unordered_map<int,int>m;
        int maxi=INT_MIN;
        if(s.empty())
        {
            return 0;
        }
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                left=max(m[s[i]]+1,left);
            }
           
                m[s[i]]=i;
            
            maxi=max(maxi,i-left+1);
        }
        return maxi;
        
    }
};