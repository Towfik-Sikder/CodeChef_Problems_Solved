#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        if(x <= 3){
            int result = x * y;
            printf("%d\n", result);
        }
        else{
            if(x % 3 != 0){
                int gameTime = x * y;
                int restTime = (x / 3) * z;
                int result = gameTime + restTime;
                printf("%d\n", result);
            }
            else{
                int gameTime = x * y;
                int restTime = ((x / 3) - 1) * z;
                int result = gameTime + restTime;
                printf("%d\n", result);
            }
        }
    }

    return 0;
}
