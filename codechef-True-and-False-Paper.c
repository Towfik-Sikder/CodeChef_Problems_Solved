#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        int result = n - k;
        printf("%d\n", result);
    }

    return 0;
}
