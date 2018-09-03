#include <stdio.h>
#include <string.h>
int main(void) {
    char ak[100];
    int k;
    scanf("%s",ak);
    k = strlen(ak);
    int ans = 26*(k+1)-k;
    printf("%d\n",ans);
}