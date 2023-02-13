 private:
        void solve(vector<int>arr,vector<int>output,int index,int n,vector<vector<int>>&ans){
            //sort(output.begin(),output.end());
            if(index==n){
                ans.push_back(output);
                return ;
            }
            solve(arr,output,index+1,n,ans);
            int ele=arr[index];
            output.push_back(ele);
            solve(arr,output,index+1,n,ans);
            //output.pop_back();
        }
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>output;
        int index=0;
        solve(arr,output,index ,n,ans);
        set<vector<int>>s;
        for(auto i:ans){
            s.insert(i);
        }
        
         vector<vector<int>>ans1(s.begin(),s.end());
        return ans1;
    }