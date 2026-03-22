class Solution {
    public int[] leftRightDifference(int[] nums) {
        int leftSum = 0;
        int rightSum = 0;
        int[] diffArray = new int[nums.length];

        for(int i = 0; i < nums.length; i++){
            rightSum += nums[i];
        }

        for(int j = 0; j < nums.length; j++){
            rightSum = rightSum - nums[j];
            diffArray[j] = Math.abs(leftSum - rightSum);
            leftSum = leftSum + nums[j];
        }
      
        return diffArray;
    }
}