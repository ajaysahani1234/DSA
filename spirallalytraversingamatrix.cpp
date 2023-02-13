int findK(int A[MAX][MAX], int n, int m, int k)
{
     vector<int>ans;
        int count=0;
        int total=n*m;
        int stRow=0;
        int endCol=m-1;
        int stCol=0;
        int endRow=n-1;
        while(count<total){
            for(int index=stCol;count<total&&index<=endCol;index++){
                ans.push_back(A[stRow][index]);
                count++;
            }
            stRow++;
            for(int index=stRow;count<total&&index<=endRow;index++){
                ans.push_back(A[index][endCol]);
                count++;
            }
            endCol--;
             for(int index=endCol;index>=stCol&&count<total;index--){
                ans.push_back(A[endRow][index]);
                count++;
            }
            endRow--;
            for(int index=endRow;index>=stRow&&count<total;index--){
                ans.push_back(A[index][stCol]);
                count++;
            }
            stCol++;
        }
        return ans[k-1];
}