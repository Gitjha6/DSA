class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt=0,n=fruits.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(fruits[i]<=baskets[j])
                {
                    cnt++;
                    baskets[j]=0;
                    break;
                }
            }
        }
        return n-cnt;
    }
};