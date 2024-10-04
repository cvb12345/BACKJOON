#include <stdio.h>

int main() {
    int num[3];
    int tmp;
    for(int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
    }
    for(int j = 0; j < 3; j++){
        for(int k = 0; k < 3-1; k++){
            if(num[k] > num[k+1]){
                tmp = num[k];
                num[k] = num[k+1];
                num[k+1] = tmp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        printf("%d ", num[i]);
    }
    
    return 0;
}
