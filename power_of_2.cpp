int Solution::power(string A) {
     //long long int k=stoll(A);
     int k,sum=0,num=0,i;
     for(i=0;i<A.length();i++)
     {
         num=A[i]-'0';
         sum=sum*10+num;
     }
    if(sum==1)
    return 0;
    if(((sum)&(sum-1))==0)
    return 1;
    return 0;
}
