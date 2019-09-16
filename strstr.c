/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Read only ( DON'T MODIFY ) String termination by '\0'
 *
 * @Output Integer
 */

int strStr(const char* s1, const char* s2) {
    int m=strlen(s1)+strlen(s2)+1;

    char* str=(char*)malloc(sizeof(char)*m);
    strcpy(str,s2);
    strcat(str,"$");
    strcat(str,s1);
   //int *z=(int*)malloc(sizeof(int)*strlen(str));
    int z[strlen(str)];
    int i,r=1,l=1;

        z[0]=0;
    for(i=1;i<strlen(str);i++)
    {
        if(i>=r)
        {
            l=i;
            r=i;
            while(str[r]==str[r-l])
                r++;
            z[i]=r-l;
        }
        else
        {
            if(z[i-l]+i<r)
                z[i]=z[i-l];
            else
            {
                l=i;
                while(str[r]==str[r-l])
                r++;
                z[i]=r-l;
            }
        }
    }
    for(i=0;i<strlen(str);i++)
    {
        if(strlen(s2)==z[i])
        {
        return (i-strlen(s2)-1);
        break;
        }
    }
    return  -1;
}
