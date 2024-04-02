#include <stdio.h>

void changeLamp(int* lamp);

int main()
{
    int lampA, lampB, num, op;
    lampA = lampB = num = op = 0;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        scanf("%d", &op);
        
        if(op == 1)
            changeLamp(&lampA);
        else if(op == 2){
            changeLamp(&lampA);
            changeLamp(&lampB);
        }
    }
    
    printf("%d\n", lampA);
    printf("%d", lampB);

    return 0;
}

void changeLamp(int* lamp){
    if(*lamp == 0)
        *lamp = 1;
    else if(*lamp == 1)
        *lamp = 0;
}


