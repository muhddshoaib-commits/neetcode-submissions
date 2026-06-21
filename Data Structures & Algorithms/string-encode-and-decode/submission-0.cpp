class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        int length;
        for(auto each:strs){
            length=each.length();
            result=result+to_string(length)+"#"+each;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> decode;
        int index=0;
        int len;
        string seach="";
        while(index<s.length()){
            size_t found = s.find('#', index);
            len=stoi(s.substr(index, found - index));
            index=found + 1;
            for(int i=0;i<len;i++){
            seach=seach+s[index];
            index++;}
            decode.push_back(seach);
            seach="";
        }
        return decode;

    }
};
