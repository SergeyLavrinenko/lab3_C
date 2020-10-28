#include <stdio.h>

int main(void){
	int numberList[10];
	
	for(int i = 0; i < 10; i++){
		if (i == 4 || i == 5) numberList[i] = 3 - i % 2;
		else numberList[i] = i % 2;
	}
	
	int i = 0;
	while(i < 10){
		printf("%d ", numberList[i]);
		i++;
	}
	
	return 0;
}
