#include <stdio.h>
#include <string.h>
int main()
{
    char a[35], b[5], sum[40];
    int i, j=0, c=0, l1, l2=1, s, k;
    printf("\nEnter the first number: ");
    scanf("%s", a);
    printf("\nEnter the second number: ");
    scanf("%s", b);
    l1 = strlen(a);
    i = l1-1;
    k = l1;
    sum[k]='\0';
    k--;
    while(i>=0 && j>=0){
        s = (a[i]-48)+(b[j]-48)+c;
        sum[k]=s%10+48;
        c = s/10;
        i--;
        j--;
        k--;
    }
    if(i>=0){
        while(i>=0){
            s=a[i]-48+c;
            sum[k]=s%10+48;
            c=s/10;
            i--;
            k--;
        }
    }
    if(c>0){
        for(i=strlen(sum); i>=0; i--){
            sum[i+1]=sum[i];
            sum[0]=c+48;
        }
    }
    printf("Result is %s", sum);
    return 0;
}