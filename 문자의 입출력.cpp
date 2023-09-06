// 문자 입출력
#include <iostream>.h

int main()
{
	// console : 입/출력 장치
	// printf
	
	printf("abcdef %d \n", 10); // %d : 치환 문자(정수)
	printf("abcdef %f \n", 3.14f); // %f : 실수

	for (int i = 0; i < 10; ++i)
	{
		printf("Output : %d \n", i);
	}

	// scanf  : 콘솔창으로부터 입력을 받음
	int iInput = 0;
	scanf_s("%d", &iInput); //입력을 기다림



	return 0;
}
