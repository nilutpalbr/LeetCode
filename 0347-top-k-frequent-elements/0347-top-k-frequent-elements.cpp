class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapp; vector<int> ans;
      for(int i=0;i<nums.size();i++){
         mapp[nums[i]]++;
      }
       priority_queue< pair<int,int> >list;
      for(auto it=mapp.begin();it!=mapp.end();it++){
           list.push({it->second,it->first});
      }
      while(k--){
          ans.push_back(list.top().second);
          list.pop();
      }
        return ans;
    }
};