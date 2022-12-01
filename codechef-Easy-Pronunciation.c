#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int count = 1;
        if(n > 4){
            for(int i = 0; i < n; i++){
                if((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u')){
                    count++;
                    if(count > 5){
                        break;
                    }
                }
            }
        }
        if(count <= 5){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
