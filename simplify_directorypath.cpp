string Solution::simplifyPath(string A) {
    stack<string> ss;
    string res="",str="";
    int i;
    for(i=0;i<A.length();i++)
    {
           str="";
           if (A[i] == '/')
              continue;


                           while(A[i]!='/'&&i<A.length())
                   {
                       str=str+A[i];
                       i++;
                   }


           if(str.compare("..")==0)
           {
               if(!ss.empty())
                   ss.pop();
           }
           else if(str.compare(".")==0)
               continue;
           else if(str.length()!=0)
           {
               ss.push(str);
           }
         }
   stack<string> s1;
    while(!ss.empty())
    {

        s1.push(ss.top());
        ss.pop();
    }
    res.append("/");
    while(!s1.empty())
    {
        //cout<<"st="<<s1.top()<<" ";
        string s=s1.top();
        if(s1.size()!=1)
            res.append(s+"/");
        else
            res.append(s);
        s1.pop();
    }
    if(!s1.empty())
    {
        string k=s1.top();
        res.append(k);
    }
    /*res.append("/");
     if(!ss.empty())
    {
        if(ss.size()!=1)
        res = "/" + ss.top() + res;
            //res.append(s+"/");
        else
        res = "/" + ss.top() + res;
            //res.append(s);
        ss.pop();
    }
    if(!ss.empty())
    {
        string k=ss.top();
        res.append(k);
    }
   while(!ss.empty())
    {
        res = "/" + ss.top() + res;
        ss.pop();
    }*/


    return res;
}
