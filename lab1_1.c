#include<stdio.h>

void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

int main(){
int a,b;
printf("Enter two numbers: \n");
scanf("%d%d",&a,&b);
printf("Before: \n");
printf("a = %d\n",a);
printf("b = %d\n",b);
swap(&a,&b);
printf("After: \n");
printf("a = %d\n",a);
printf("b = %d",b);
return 0;
}
