#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, m;
        scanf("%d %d %d", &n, &k, &m);
        int count = 0;
        int y = 0;
        int i = 0;
        for(i = 1; i <= 100; i++){
            y = (k * m) * i;
            if(y >= n){
                break;
            }
        }
        printf("%d\n", i);
    }

    return 0;
}
