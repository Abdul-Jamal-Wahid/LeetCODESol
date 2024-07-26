class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0;
        int maxiCurr=nums[0];
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            maxiCurr=Math.max(maxiCurr,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxiCurr;
    }
}