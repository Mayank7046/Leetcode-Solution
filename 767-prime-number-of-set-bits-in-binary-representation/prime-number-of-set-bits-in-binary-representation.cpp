class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count=0;
        int mask=665772;
        for(int num=left; num<=right;num++){
            if((mask>> __builtin_popcount(num)) &1){
                count++;
            }
        }
        return count;
    }
};