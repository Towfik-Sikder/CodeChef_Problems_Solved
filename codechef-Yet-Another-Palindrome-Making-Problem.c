#include <stdio.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int count = 0;
        for(char i = 'a'; i <= 'z'; i++){
            for(int j = 0; j < n; j++){
                if(i == s[j]){
                    count++;
                }
            }
            if(count % 2 != 0){
                break;
            }
        }
        if(count == n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
