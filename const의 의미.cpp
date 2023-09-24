#include <iostream>
using namespace std;

int main()
{
	//const
	volatile const int cint = 100; //레지스트리 최적화 사용하지 않음

	//상수화
	//l-value : qustn
	//r-value : 상수

	cint;

	// cint = 100; //cpp라는 문법에서 막아주는 것 (r-value)는 아님

	int* pInt;

	pInt = (int*)&cint;
	*pInt = 300;

	printf("%d", cint);
	return 0;
}
