class Solution {
public:
    int numTrees(int n) {
        if(n==1)return 1;
        int combinationWithN[n+1];
        combinationWithN[0]=1; combinationWithN[1]=1;
        for(int i=2;i<=n;i++){
            int total=0;
            for(int j=1;j<=i;j++){
                int leftNodesNum= j-1; int rightNodesNum= i-j;
                total+= combinationWithN[leftNodesNum]*combinationWithN[rightNodesNum];
            }
            combinationWithN[i]=total;
        }
        return combinationWithN[n];
    }
};