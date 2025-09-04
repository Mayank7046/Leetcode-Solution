class Solution {
public:
    int findClosest(int x, int y, int z) {
        int per1=abs(z-x);
        int per2=abs(z-y);
        // if(per1==per2){
        //     return 0;
        // }
        if(per1>per2)
        return 2;
        else if(per2>per1){
            return 1;
        }

        return 0;
    }
};