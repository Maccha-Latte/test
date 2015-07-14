#include <stdio.h>

int main(void){
    int a,b;
    printf("Input a,b(positive integers): ");
    scanf("%d %d", &a,&b);

if(a<0||b<0||b>10^9){
    printf("Error: The initial a,b do not satisfy restrictions.\n");
    printf("Error: Input a,b(positive integers) again: ");
    scanf("%d %d", &a,&b);
}

int ans = b%a + 1;

    printf("%d\n", ans);
    
    return 0;
}