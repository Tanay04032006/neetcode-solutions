class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        for(auto it:s){
            mp[it-'a']++;
        }
        for(auto it:t){
            mp[it-'a']--;
        }
        for(auto it:mp){
            if(it.second!=0) return false;
        }
        return true;


    }
};
