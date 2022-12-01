#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int w = a + c;
        int x = a + d;
        int y = b + c;
        int z = b + d;

        int big1 = 0;
        int big2 = 0;

        if(w > x){
            big1 = w;
        }
        else{
            big1 = x;
        }
        if(y > z){
            big2 = y;
        }
        else{
            big2 = z;
        }

        if(big1 > big2){
            printf("%d\n", big1);
        }
        else{
            printf("%d\n", big2);
        }
    }

    return 0;
}
