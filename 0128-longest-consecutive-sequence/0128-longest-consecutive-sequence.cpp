class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),maxlen=0;
        unordered_set<int>st(nums.begin(),nums.end());                                   
        for(int num:st)
        {
            if(st.find(num-1)==st.end())
            {
                int len=1,seq=num+1;
                while(st.find(seq)!=st.end())
                {
                    len++;
                    seq++;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};