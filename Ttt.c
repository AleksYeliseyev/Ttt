#include <stdio.h>

void printField(char a[]);
	
int main(int argc, char const *argv[])
{	
	char field[9] = {'X', 'O', 'X', 'X', ' ', ' ' , ' ' , ' ' , ' '};
	printField(field);
	//scanf("%c", &b);
	


	//int res = (h - b - 1) / (a - b) + 1;
	
	//printf("result: %d\n", res);
	return 0;
}


//Вывод игрового поля в консоль
void printField(char field[])
{
	int count = 0;
	printf("---------\n");
	for (int j = 0; j < 3; j++)
	{
		printf("| ");
		for (int i = 0; i < 3; i++)
		{
			printf("%c ", field[count]);
			count++;
		}
		printf("|\n");
	}	
	printf("---------\n");
}