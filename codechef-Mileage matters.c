#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x, y, a, b;
        scanf("%d %d %d %d %d", &n, &x, &y, &a, &b);
        double needPetrol = (n * x) / a;
        double needDiesel = (n * y) / b;
        if(needPetrol < needDiesel){
            printf("PETROL\n");
        }
        else if(needPetrol > needDiesel){
            printf("DIESEL\n");
        }
        else if(needPetrol == needDiesel){
            printf("ANY\n");
        }
    }

    return 0;
}
