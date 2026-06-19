class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string, vector<string>> map;
    
    for (int i = 0; i < strs.size(); i++) {
        string key = strs[i];        // copy of the original string
        sort(key.begin(), key.end()); // sort the copy → this is your key
        
        map[key].push_back(strs[i]);  // push original into its group
    }
    
    // now you have groups in `map`, but the return type wants
    // vector<vector<string>>, not a map. How do you get values
    // out of a map into a vector?
        vector<vector<string>> result;
        for(auto it: map){
            result.push_back(it.second);
        }
        return result;
    }
};
