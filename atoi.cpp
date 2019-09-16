int Solution::atoi(const string A) {
      int k,sum=0,num=0,i=0,sign=1;
      long long int y=0;
     if(A[0]=='-')
     {
         sign=-1;
         i++;
     }
     else if(A[0]=='+')
     {
         sign=1;            //-6435D56183011M11
         i++;
     }
     while(A[i]!=' '&&i<A.length())
     {
         if(A[i]>='a'&&A[i]<='z'||A[i]>='A'&&A[i]<='Z')
         {
          break;
         }
         else
         {
         num=A[i]-'0';
         if(sign==-1)
         {
         sum=sum*10+num*(-1);
         y=y*10+num*(-1);
         }
         else
         {
         sum=sum*10+num;
         y=y*10+num;
         }
         }
         i++;
     }

     if(sum==y)
     return sum;
     else if(sum!=y&&sign>0)
     return INT_MAX;
     else if(sum!=y&&sign<0)
     return INT_MIN;
}

