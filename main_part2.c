#include <stdio.h>

void init_array(int (*pointer)[], int x, int y, int inital){
        int (*p)[x] = pointer;
        for(int *i = p[0]; i < p[0] + x * y; i++ ){
                *i = inital;
        }
}

void print_array(int (*pointer)[], int x, int y){
	int (*p)[x] = pointer;
        for(int i = 0; i < x; i++){
		for(int *k = p[i]; k < p[i] + y; k++){
			printf("%d ", *k);
		}
                printf("\n");
        }
}

int main(){
	int my_array[10][10];
	init_array(my_array, 10, 10, 0);
	print_array(my_array, 10, 10);

	printf("\n\n");
	
	init_array(my_array, 10, 10, 1);
	print_array(my_array, 10, 10);
	return 0;
}
