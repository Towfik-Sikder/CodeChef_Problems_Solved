#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int c;
        scanf("%d", &c);
        if(c > 20){
            printf("HOT\n");
        }
        else{
            printf("COLD\n");
        }
    }

    return 0;
}
