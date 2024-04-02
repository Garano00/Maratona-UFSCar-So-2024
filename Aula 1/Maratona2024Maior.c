#include <stdio.h>
#include <stdlib.h>

int main(){    	
    
	int num, big; 
	num = big = 0;
	
	do{
		scanf("%d", &num);
		if(num > big)
			big = num;
	}while(num != 0);
	
	printf("%d", big);

    return 0;
}
