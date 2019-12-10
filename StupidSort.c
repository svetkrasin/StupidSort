# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int i;
int a;

int stupid (int *array, int b){
	for (i = 0; i < b; i++) {
		if (array[i] > array[i+1]) {
			a = array[i];
			array[i] = array[i+1];
			array[i+1] = a;
			i = -1;
		}
	}
	return *array;
}

int main(){
	int *array;
	int b;
	int n;

	srand((unsigned int)clock());
	n = rand() % 20 + 1;
	b = n-1;
 
	array=(int*)calloc(n,sizeof(int));
	for (i = 0; i < n; i++) {
		srand((unsigned int)clock());
		array[i] = rand() % 100;
	}

	printf(" begining ");
	for (i = 0; i < n; i++) {
		printf(" %d ", array[i]);
	};
   
	printf("\n");

	stupid(array, b);

	printf("end");
	for (i = 0; i < n; i++) {
		printf(" %d ", array[i]);
	};
   
	printf("\n");

	free(array);

	return 0;
}