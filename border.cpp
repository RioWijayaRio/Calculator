#include<stdio.h>

int main(){
	
	int input;
	scanf("%d", &input);
	
	for (int i = 1; i<= input; i++){
		for (int j = 1; j <= input; j++){
			if (i == 1 || i == input){
				printf("#");
			}
			else{
				if (j == 1 || j == input){
					printf("#");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
