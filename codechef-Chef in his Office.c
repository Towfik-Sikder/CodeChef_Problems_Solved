#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        int result = (x * 4) + y;
        printf("%d\n", result);
    }

    return 0;
}
