bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int s=0;
        int e=(m)-1;
        
        while(s<n&&e>=0){
            int a=matrix[s][e];
            if(a==x){
                return 1;
            }
            else if(a<x){
                s++;
            }
            else{
                e--;
            }
        
        }
        return 0;
    }