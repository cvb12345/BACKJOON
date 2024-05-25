#include <stdio.h>
#include <string.h>

int main(){
	char str_name[100] = "";
	char str_reverse[100] = "";
	int len, j = 0;
	
	scanf("%s", str_name);
	
	len = strlen(str_name);
	
	for(int i = len - 1; i >= 0; --i){
      str_reverse[j++] += str_name[i];
    }
    
	if(strcmp(str_name, str_reverse) == 0){
		printf("1");
	}
	else{
		printf("0");
	}
	
	return 0;
}
