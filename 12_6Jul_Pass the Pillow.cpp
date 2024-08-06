class Solution {
public:
    int passThePillow(int n, int time) {
        int direction = 1; // 1 for forward, -1 for backward
        int i = 1; // starting with person 1 holding the pillow
        for(int t=1;t<=time;t++){
            if(i==n){
                direction=-1;
            }
            else if(i==1){
                direction=1;
            }
            i+=direction;
        }
        return i;
    }
};