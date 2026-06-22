class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int result;
        vector<int> out;
        for(int i=0;i<nums.size();i++){
            result=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    result=result*nums[j];
                }
            }
            out.push_back(result);
        }
        return out;
    }
};
