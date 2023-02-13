 vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        vector<int>ans;
        //int count=0;
        //int total=R*C;
        int strow=0;
        int stcol=0;
        int endrow=R-1;
        int endcol=C-1;
        while(strow<=endrow&&stcol<=endcol){
            for(int index=stcol;index<=endcol;index++){
                ans.push_back(a[strow][index]);
            }
            strow++;
            for(int index=strow;index<=endrow;index++){
                ans.push_back(a[index][endcol]);
            }
            endcol--;
             if(strow<=endrow){
                
            
            for(int index=endcol;index>=stcol;index--){
                ans.push_back(a[endrow][index]);
            }
            endrow--;
            }
             if(stcol<=endcol){
                
            
            for(int index=endrow;index>=strow;index--){
                ans.push_back(a[index][stcol]);
            }
            stcol++;
        }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }