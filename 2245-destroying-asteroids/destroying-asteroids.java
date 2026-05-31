class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        Arrays.sort(asteroids) ; 
        long total = mass ; 
        for(int i : asteroids){
            if(total < i)return false ;
            total += i ;
        }
        return true ; 
    }
}