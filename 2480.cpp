#include <stdio.h>

int main() {
    int num, num1, num2, equal = 0;
    
    int max, coin = 0;
    
    scanf("%d %d %d", &num, &num1, &num2);
    
    if(num == num1 && num1 == num2){
        coin += 10000 + num * 1000;
    }else if(num == num1 || num1 == num2 || num == num2){
        if(num == num1) equal = num;
        else if(num1 == num2) equal = num1;
        else if(num == num2) equal = num;
        coin += 1000 + equal * 100;
    }else{
        max = num;
        if(num1 > max) max = num1;
        if(num2 > max) max = num2;
        coin += max * 100;
    }
    
    printf("%d", coin);
    
    return 0;
}