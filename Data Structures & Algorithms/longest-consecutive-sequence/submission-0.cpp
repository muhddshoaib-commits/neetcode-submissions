class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxlength=0;
        int curr;
        for(int i=0;i<nums.size();i++){
            curr=nums[i];
            if (numSet.count(nums[i] - 1) == 0) {
                while(numSet.count(curr+1)){
                    curr++;
                }
                if(curr - nums[i] + 1>maxlength){
                    maxlength=curr-nums[i]+1;
                }
            }
               
            }
            return maxlength;

}

        
    
};
