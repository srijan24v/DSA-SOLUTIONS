class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end());
        int maxlen = 0;
        for(int num : nums){
            if(s.find(num - 1) == s.end()){
                int current = num;
                int length = 1;

                while(s.find(current + 1) != s.end()){
                    current++;
                    length++;
                }
                maxlen = max(maxlen , length);
            }
        }
        return maxlen;
    }
};