class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int cnt=0;
        int maxiCnt=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                cnt+=1;
            }else{
                cnt=0;
            }
            maxiCnt=Math.max(maxiCnt,cnt);
        }
        return maxiCnt;
    }
}