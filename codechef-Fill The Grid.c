#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        if((n - m >= 2) || (m - n >= 2)){
                printf("0\n");
        }
        else{
            if(n >= m){
                printf("%d\n", m);
            }
            else{
                printf("%d\n", n);
            }
        }
    }

    return 0;
}
