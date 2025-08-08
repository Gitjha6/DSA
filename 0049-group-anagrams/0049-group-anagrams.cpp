class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto word:strs)
        {
            vector<int>fq(26,0);
            for(auto ch:word)
            {
                fq[ch-'a']++;
            }
            string temp;
            for(int i=0;i<26;i++)
            {
                temp+= to_string(fq[i])+"#";
            }
            mp[temp].push_back(word);
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};