#include <stdio.h>
#include <stdlib.h>


char* convertIntegerToChar(int N)
{


	int m = N;
	int digit = 0;
	while (m) {

		digit++;

	
		m /= 10;
	}


	char* arr;


	char arr1[digit];

	arr = (char*)malloc(digit);

	int index = 0;
	while (N) {

	
		arr1[++index] = N % 10 + '0';

	
		N /= 10;
	}

	int i;
	for (i = 0; i < index; i++) {
		arr[i] = arr1[index - i];
	}

	
	arr[i] = '\0';

	
	return (char*)arr;
}

int main()
{

	int N = 12349;
	int len = 5;

	
	char* arr = convertIntegerToChar(N);

	
	for (int i = 0; i < len; i++)
		printf("%c, ", arr[i]);

	return 0;
}
