class Solution {
public:

    string encode(vector<string>& strs) {
        string s ="";
        for(int i = 0;i<strs.size();i++){
            s+= strs[i];
            s+= "-";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>res;
        string str = "";
        for(int i = 0;i<s.length();i++){
            if(s[i] != '-'){
                str += s[i];
            }else{
                res.push_back(str);
                str = "";
            }
        }
    return res;
    }
};
