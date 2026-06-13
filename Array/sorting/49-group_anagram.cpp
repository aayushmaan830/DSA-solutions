class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> anagram;
        for(string word:strs){
            string temp=word;
            sort(word.begin(),word.end());
            mp[word].push_back(temp);
        }
        for(auto it:mp){
            anagram.push_back(it.second);
        }
        return anagram;
    }
};