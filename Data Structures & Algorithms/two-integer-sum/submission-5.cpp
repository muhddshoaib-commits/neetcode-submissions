class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> hashmap;
for(int i = 0; i < nums.size(); i++){
    int value = target - nums[i];
    if(hashmap.find(value) != hashmap.end()){
        return {hashmap[value], i};
    }
    hashmap[nums[i]] = i;
}
return {};
       
       
    }
};
