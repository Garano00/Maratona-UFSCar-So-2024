#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d %d",&A, &B);

    // A = porta P
    // B = porta R
    
    if(A == 0)
        printf("%c", 'C');
    else if(B == 0)
        printf("%c", 'B');
    else
        printf("%c", 'A');
        
    return 0;
}