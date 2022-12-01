#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, x, y;
        scanf("%d %d %d %d", &n, &k, &x, &y);
        if(x <= y){
            int result = n * x;
            printf("%d\n", result);
        }
        else{
            int red = k * x;
            int blue = (n - k) * y;
            int result = red + blue;
            printf("%d\n", result);
        }
    }
    return 0;
}
