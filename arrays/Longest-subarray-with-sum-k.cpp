class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int maxl = 0;
        for(int i=0; i<n;i++){
         int sum = 0;    
        
        for(int j=i ; j<n;j++){
            sum = sum + nums[j];
        

        if(sum == k){
            int length = j - i + 1;
            maxl = max(maxl , length);
        }
        }
        }
        return maxl;
    }
};
