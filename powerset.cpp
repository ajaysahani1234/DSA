void solve(string &str,string output,int index,vector<string>&ans){
            if(index>=str.size()){
                if(output!="")
                ans.push_back(output);
                return ;
            }
            //exclude
            solve(str,output,index+1,ans);
            //include
            char element=str[index];
            output.push_back(element);
            solve(str,output,index+1,ans);
            
        }
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string>ans;
		    //if(s.size()==0)
		    //return ans;
		    string output;
		    int index=0;
		    solve(s,output,index,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}