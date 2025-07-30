class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1,e=*max_element(piles.begin(),piles.end()),k;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            long long time=0;
            for(int i=0;i<n;i++)
            {
                time+=ceil((double)piles[i]/m);
            }
            if(time<=h)
            {
                k=m;
                e=m-1;
            }
            else
            s=m+1;
        }
        return k;
    }
};