class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int maxx = nums[0];

        for(int i=0;i<n;i++){
sum = sum + nums[i];

maxx = max(maxx , sum);

if(sum<0){
    sum = 0;
}
        }
        return maxx;
    }
};