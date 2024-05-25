//https://www.acmicpc.net/problem/5554

#include <stdio.h>

int main(){

    int min, sec, total = 0;
	
	for(int i = 0; i < 4; i++){
		scanf("%d", &total);
		min += total;
	}
    sec = min % 60;
    min = min / 60;
    printf("%d\n%d\n", min, sec);

    return 0;
}
