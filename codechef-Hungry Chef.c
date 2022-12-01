#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y, n, r;
        scanf("%d %d %d %d", &x, &y, &n, &r);
        int a = 0;
        int b = 0;
        if(y * n <= r){
            b = n;
            printf("%d %d\n", a, b);
        }
        else if(x > r && y > r){
            printf("-1\n");
        }
        else{
            a = n;
            b = 0;
            int tempX = 0;
            int tempY = 0;

            for(int i = 1, j = n; i <= n; i++, j--){
                tempX = x * j;
                tempY = y * i;
                if(tempX + tempY >= r){
                    printf("%d %d\n", x + 1, y + 1);
                    break;
                }
            }
        }
    }

    return 0;
}
