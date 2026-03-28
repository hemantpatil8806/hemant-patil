#include<stdio.h>

int main() {
	int array[8]={12,24,36,48,60,72,80,85};
	int i;
	
	printf("Elements of the array are:\n");
	
	
	for(i=0; i<8; i++){
		printf("array[%d]= %d\n",i,array[i]);
	}
	
	return 0;
}
