#include <stdio.h>

int main() {
    int num, one = 0;
    char result = '\0';
    
    for(int i = 0; i < 3; i++){
        one = 0;
        for(int j = 0; j<4; j++){
            scanf("%d", &num);
            if(num == 0){
                one++;
            }
        }
        if(one == 1){
            printf("A\n");
        }else if (one == 2){
            printf("B\n");
        }else if (one == 3){
            printf("C\n");
        }else if (one == 4){
            printf("D\n");
        }else{
            printf("E\n");
        }
        
    }
    return 0;
}