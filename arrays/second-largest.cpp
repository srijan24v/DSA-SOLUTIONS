class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int secLar = -1;
        for(int i=1 ; i<nums.size();i++){
            if(nums[i]>largest){
                secLar = largest;
                largest = nums[i];
            }
            else
            if(nums[i]<largest && nums[i]>secLar){
                secLar = nums[i];
            }    
                            }
        
    return secLar;
    }
};