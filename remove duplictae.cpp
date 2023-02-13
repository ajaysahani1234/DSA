string removeDups(string S) 
	{
	    map<char,int>m;
	    string s="";
	    for(int i=0;i<S.length();i++){
	         m[S[i]]++;//count frequency of each element
	        if(m[S[i]]==1){
	            s+=S[i];
	        
	            //m[S[i]]++;
	        }
	    }
	    return s;
	}