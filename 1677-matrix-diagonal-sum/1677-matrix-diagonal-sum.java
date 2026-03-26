class Solution {
    public int diagonalSum(int[][] mat) {
        int maxSum = 0;
        int j;
        int extra = 0;
        if(mat.length % 2 == 1){
            extra = mat[(mat.length - 1) / 2][(mat.length - 1) / 2];
        }
        for(int i = 0; i < mat.length; i++){
            j = i;
            maxSum += mat[i][j]; 
        }
        for(int i = 0; i < mat.length; i++){
            j = mat.length - i - 1;
            maxSum += mat[i][j];
        }
        return (maxSum - extra);
    }
}