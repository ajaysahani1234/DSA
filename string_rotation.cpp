bool areRotations(string s1,string s2)
    {
        string s=s1+s1;
        if(s1.length()!=s2.length()){
            return 0;
        }
       else if(s.find(s2)==-1){
            return 0;
        }
        else{
            return 1;
        }
    }