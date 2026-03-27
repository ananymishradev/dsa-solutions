class Solution {
    public int[] rowAndMaximumOnes(int[][] mat) {
        int maxOnesIdx = 0;
        int maxOnesCount = 0;
        int currentOnesCount = 0;

        for(int i = 0; i < mat.length; i++){
            currentOnesCount = 0;
            for(int j = 0; j < mat[i].length; j++){
                if (mat[i][j] == 1){
                    currentOnesCount++;
                }
            }
            if (currentOnesCount > maxOnesCount) 
            {
                maxOnesIdx = i;
                maxOnesCount = currentOnesCount;
            }
        }
        return new int[]{maxOnesIdx, maxOnesCount};
    }
}