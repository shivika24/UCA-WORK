/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 *
 * @Output Integer
 */
int lengthOfLastWord(const char* A) {
     int i,max=0,l=0;
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]==' ')
        l=0;
        else
        {
        l++;
        max=l;
        }
    }
    return max;
}
