

#include <stdio.h>

int main()
{
    int i, j, rves=0,o;
    printf("Enter a number");
    scanf("%d",&i);
    o=i;
    while(i!=0)
    {
       j=i%10;
       rves=rves*10+j;
       i/=10;
    }
    printf("%d this the reverse of the number",rves);
    if(o==rves)
    {
        printf("Given is a a palindrome");
    }
    else{
        printf("\ngiven is not a palindrome");
    }
    return 0;
}
