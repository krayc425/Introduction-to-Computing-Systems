#include <stdio.h>

int main(){
	int row, column;
	printf("Enter the row:\n");
	scanf("%d",&row);

	printf("Enter the column:\n");
	scanf("%d",&column);

	int array[row][column];
	int new_Array[column][row];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			printf("Enter item at array[%d][%d]\n", i, j);
			scanf("%d",&array[i][j]);
		}
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			new_Array[j][i] = array[i][j];
		}
	}

	printf("\nThe new array is:\n");
	for(int i = 0; i < column; i++){
		for(int j = 0; j < row; j++){
			printf("%d\t",new_Array[i][j]);
		}
		printf("\n");
	}

}