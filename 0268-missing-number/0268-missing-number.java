class Solution {
    public int missingNumber(int[] nums) {
        int sum=0;
        int n=nums.length;
        int s=n*(n-1)/2;
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=i){
                return i;
            }
            //s+=i;
        }
        return nums.length;
       
    }
}