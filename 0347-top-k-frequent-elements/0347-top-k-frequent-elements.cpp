class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        vector<vector<int>>temp(n+1);
        for(auto it:mp)
        {
            temp[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int i=n;i>=0;i--)
        {
            for(auto it:temp[i])
            {
                ans.push_back(it);
                if(ans.size()==k)
                return ans;
            }
        }
        return ans;
    }
};