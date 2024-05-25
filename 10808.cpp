#include <stdio.h>
#include <string.h>

int main(){
	char str_say[100] = "";
	char ap = 'a';
	int total = 0;
	
	scanf("%s", str_say);
	
	for(int i  = 0; i<26; i++){
		total = 0;
		for(int j = 0; j<=strlen(str_say); j++){
			if(ap == str_say[j]){
				total += 1;
			}
		}
		printf("%d ", total);
		ap += 1;
	}
	
	return 0;
}
