#include <stdio.h>
#include <string.h>
void permutation(char*,int,int);
char* swap(char*,int,int);

int main()
{  char str[3];
    printf("enter string:");
    scanf("%s",str);
    int n=strlen(str);
    permutation(str,0,n);

    return 0;
}
void permutation(char* str,const int start,int end)
{   int i,j;
    for(i=start;i<end-1;i++)
    {
        for(j=i+1;j<end;j++)
        {
        swap(str,i,j);
        permutation(str,i+1,end);
        swap(str,i,j);
    }
}
        printf("%s\n",str);
}
char* swap( char* str,int i,int j)
{
    char temp;
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    return str;
}
