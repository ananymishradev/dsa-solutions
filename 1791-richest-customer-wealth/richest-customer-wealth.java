class Solution {
    public int maximumWealth(int[][] accounts) {
        int currentWealth=0;
        int maxWealth=0;

        for(int i = 0; i < accounts.length; i++){
            currentWealth=0;
            for(int j = 0; j < accounts[i].length; j++){
                currentWealth += accounts[i][j]; 
            }
            maxWealth = Math.max(currentWealth, maxWealth);
        }
        return maxWealth;
    }
}