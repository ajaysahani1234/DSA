 private:
    void solve(string s,vector<string>&ans,int index){
        if(index>=s.size()){
            ans.push_back(s);
            return ;
        }
        for(int j=index;j<s.size();j++){
            swap(s[index],s[j]);
            solve(s,ans,index+1);
            swap(s[index],s[j]);
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		   vector<string>ans;
		   int index=0;
		   solve(S,ans,index);
		   sort(ans.begin(),ans.end());
		   ans.erase(unique(ans.begin(),ans.end()),ans.end());
		   return ans;
		}