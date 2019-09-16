/**
 * @input A : String termination by '\0'
 * @input B : String termination by '\0'
 *
 * @Output Integer
 */
int compareVersion(char* A, char* B) {
    int i=0,j=0;
    unsigned long long int sum=0,sum1=0;
    for(i=0,j=0;(i<strlen(A)||j<strlen(B));)
    {
     while(i<strlen(A)&&A[i] != '.')
     {
         sum=sum*10+(A[i]-'0');
         i++;
     }
    while(j<strlen(B)&&B[j] != '.')
     {
         sum1=sum1*10+(B[j]-'0');
         j++;
     }
     if(sum==sum1)
     return 0;
     else if(sum>sum1)
     return 1;
     else
     return -1;
    }
}
