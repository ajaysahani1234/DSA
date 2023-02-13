private:
    void solve(int arr[],int N,string output,int index,vector<string>&ans,string mapping[]){
        if(index>=N){
            ans.push_back(output);
            return ;
        }
        int number=arr[index];
        string value=mapping[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(arr,N,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string>ans;
        if(N==0)
        return ans;
        string output;
            int index=0;
            string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            solve(a,N,output,index,ans,mapping);
            return ans;
        
    }