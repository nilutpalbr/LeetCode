class Solution {
public:
    int dp[1001][1001];
int findLength(vector<int>& nums1, vector<int>& nums2) {
     memset(dp,0,sizeof(dp)); int maxAns=0;
     for(int i=1;i<=nums1.size();i++){
         for(int j=1;j<=nums2.size();j++){
             if(nums1[i-1]==nums2[j-1]){
                 dp[i][j]=1+dp[i-1][j-1];
                 maxAns=max(maxAns,dp[i][j]);
             }else{
                 dp[i][j]=0;
             }
         }
     }
     return maxAns;
}
};