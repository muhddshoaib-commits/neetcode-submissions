class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftarr;
        vector<int> rightarr(nums.size());
        vector<int> out;
        leftarr.push_back(1);
        rightarr[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            leftarr.push_back(leftarr[i-1]*nums[i-1]);
        }
        for(int i=nums.size()-2;i>=0;i--){
            rightarr[i]=rightarr[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
        out.push_back(leftarr[i]*rightarr[i]);
        }
        return out;

    }
};
