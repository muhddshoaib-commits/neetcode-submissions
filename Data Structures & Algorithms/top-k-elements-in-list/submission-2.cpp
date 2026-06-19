class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        vector<int> result;
        for(auto copy:nums){
            hash[copy]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:hash){
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++){
        result.push_back(pq.top().second);
        pq.pop();
        }
        return result;

    }
};
