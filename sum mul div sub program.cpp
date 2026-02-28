#include <stdio.h>
int main() {
	
	int a,b,sum,mul,div,sub;
	printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    
    sum=a+b;
	mul=a*b;
	div=a/b;
	sub=a-b;
	
	printf("%d+%d=%d\n",a,b,sum);
	printf("%d*%d=%d\n",a,b,mul);
	printf("%d/%d=%d\n",a,b,div);
	printf("%d-%d=%d\n",a,b,sub);
	return 0;	
}
