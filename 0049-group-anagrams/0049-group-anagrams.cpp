class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string> > mapp(strs.size());
        vector<vector<string> > ans;
       int i=0; int size= strs.size();
      while(i<size){
          string temp= strs[i];
          sort(temp.begin(),temp.end());
          mapp[temp].push_back(strs[i]);
          i++;
      }
        for(auto it=mapp.begin();it!=mapp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};