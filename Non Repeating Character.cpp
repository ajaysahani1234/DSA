char nonrepeatingCharacter(string S)
    {
       map<char,int>m;
       for(int i=0;i<S.size();i++){
           m[S[i]]++;
       }
    //   for(auto it:m){
    //       if(it.second==1){
    //           return it.first;
    //       }
    for(int i=0;i<S.size();i++){
        if(m[S[i]]==1){
            return S[i];
        }
        
    }
    return '$';
       }