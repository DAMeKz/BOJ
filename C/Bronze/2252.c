#include<stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    for(int i = N-1 ; i >= 0 ;i--){
        for(int emptySpace = 0 ; emptySpace <i;emptySpace++){
            printf(" ");
        }
        for(int star = 0 ; star < N-i;star++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i <N;i++){
        for(int emptySpace = 0;emptySpace < i;emptySpace++){
            printf(" ");
        }
        for(int star = 0 ; star < N-i;star++){
            printf("*");
        }
        printf("\n");
    }
    
}