/**
 * @input A : String termination by '\0'
 *
 * @Output Integer
 */
 int check(char A)
 {
     if(A=='I')
     return 1;
     else if(A=='V')
     return 5;
     else if(A=='X')
     return 10;
     else if(A=='L')
     return 50;
     else if(A=='C')
     return 100;
     else if(A=='D')
     return 500;
     else if(A=='M')
     return 1000;
 }
int romanToInt(char* A) {
    int i,sum=0;
    int s1=0,s2=0,res=0;
    for(i=0;i<strlen(A);i++)
    {
        s1=check(A[i]);
        if(i+1<strlen(A))
        {
            s2=check(A[i+1]);
            if(s1>=s2)
            {
                res+=s1;
            }
            else
            {
                res=res+s2-s1;
                i++;
            }
        }
        else
        {
            res+=s1;
        }
    }
    return res;
}
