class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<0 || nums.size()>100000){
            return false;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<-1000000000 || nums[i]>1000000000){
                return false;
            }
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};