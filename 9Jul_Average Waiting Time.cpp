class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& arr) {
        int n=arr.size();
        double totalWaitTime=0;
        int currTime=0;

        for(auto &vec : arr){
            int arrivalTime=vec[0];
            int cookTime=vec[1];
            if(currTime<arrivalTime){
                currTime=arrivalTime;
            }

            int waitTime=currTime+cookTime-arrivalTime;

            totalWaitTime+=waitTime;

            currTime+=cookTime;
        }
        return totalWaitTime/n;
    }
};