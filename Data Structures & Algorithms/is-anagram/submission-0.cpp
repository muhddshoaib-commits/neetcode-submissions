class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char, int> s1;
        for(char c:s){
            s1[c]++;
        }
        for (char c:t){
            s1[c]--;
        }
        for (auto p:s1){
            if(p.second!=0){
                return false;
            }
        }
        return true;
    }
};
