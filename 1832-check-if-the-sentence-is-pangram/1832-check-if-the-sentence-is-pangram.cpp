class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_map<char,int> mapp;
       for(auto it : sentence){mapp[it]++;}
       for(int i='a';i<='z';i++){
           char letter= char(i);
           if(mapp.find(letter)==mapp.end())return false;
       }
        return true;
    }
};