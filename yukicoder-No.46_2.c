#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d", &a,&b);
    int ans = b%a + 1;
    printf("%d\n", ans);
    return 0;
}