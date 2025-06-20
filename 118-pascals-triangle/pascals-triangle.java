class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>>ans=new ArrayList<>();
        for(int i=1;i<=numRows;i++)
        {
            List<Integer>curr=new ArrayList<>(Collections.nCopies(i,1));
            ans.add(curr);
        }
        for(int i=2;i<numRows;i++)
        {
            for(int j=1;j<i;j++)
            {
                ans.get(i).set(j,ans.get(i-1).get(j-1)+ans.get(i-1).get(j));
            }
        }
        return ans;
    }
}