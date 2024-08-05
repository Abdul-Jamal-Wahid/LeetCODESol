class Solution {
    public int maxProfit(int[] prices) {
      int n=prices.length;
      int len=0,maxi=0;
      for(int i=1;i<n;i++){
        maxi+=prices[i]-prices[i-1];
        if(maxi>0){

        }else{
            maxi=0;
        }
        len=Math.max(len,maxi);
      }
        return len;
    }
}