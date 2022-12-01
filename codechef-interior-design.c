#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int sum1 = x1 + y1;
        int sum2 = x2 + y2;
        if(sum1 <= sum2){
            printf("%d\n", sum1);
        }
        else{
            printf("%d\n", sum2);
        }
    }


    return 0;
}
