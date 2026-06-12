class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> count1;
        map<char,int> count2;
        for(char c:s){
            count1[c]++;
        }
        for(char c:t){
            count2[c]++;
        }
        if(count1.size()!=count2.size()){
            return false;
        }
        for(auto it: count1){
            if(it.second!=count2[it.first]){
                return false;
            }
        }
        return true;
    }
};