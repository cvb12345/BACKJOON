//https://www.acmicpc.net/problem/5554

#include <stdio.h>

int main(){

    int min, sec = 0;

    int go_sch1, go_sch2, go_sch3, go_sch4 = 0;

    scanf("%d %d %d %d", &go_sch1, &go_sch2, &go_sch3, &go_sch4);

    min = go_sch1 + go_sch2 + go_sch3 + go_sch4;

    sec = min % 60;
    min = min / 60;

    printf("%d\n%d\n", min, sec);

    return 0;
}
