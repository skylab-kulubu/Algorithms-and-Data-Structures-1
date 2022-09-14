class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg=0;
        double sum=0;
        double bol;
        for(int i=0;i<k;i++)
            sum += nums[i];
        maxavg = sum/k;
        
        for(int i=0; i<nums.size()-k; i++){
            sum = sum - nums[i] + nums[k+i];
            bol = sum/k;
            if(bol>maxavg)
                maxavg=bol;
        }
        
        return maxavg;
    }
    
    
};