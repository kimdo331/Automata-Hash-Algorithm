#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include "myHeader.h"

int main()
{
	srand((int)time(NULL));
	printf("input: ");
	scanf("%s", input);
	myPrint("input: %s\n", input);
	if (IS_SALT) {
		printf("salt: ");
		scanf("%s", salt);
		strcat(input, salt);
		myPrint("salt: %s\n", salt);
	}
	if (!IS_FILE_PRINT) {
		system("pause"); system("cls");
	}

//	random_input_salt(20, 5);

	DO_transform_to_matrix();	// 격자로 변환

	DO_playCA();	// 세포 자동자 실행

	DO_transform_to_string();	// 문자로 변환

	if (IS_FILE_PRINT) fprintf(logfp, "\n==========================\n\n");
	else system("pause");
	
	return 0;
}
