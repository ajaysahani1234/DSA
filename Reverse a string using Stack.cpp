char* reverse(char *S, int len)
{
    stack<char>s1;
    for(int i=0;i<len;i++){
        s1.push(S[i]);
    }
    for(int i=0;i<len;i++){
    
        S[i]=s1.top();
    
        s1.pop();
    
    }
    return S;
}