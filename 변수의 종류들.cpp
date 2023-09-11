#include <stdio.h>

// 1. 전역변수(함수 바깥에 선언된 변수)
int g_i = 0; // 전역변수는 data 영역이라는 메모리 영역에 지정되어 있다
// main 함수가 호출되면서 data 영역이 생성되고, 전역변수들이 data 영역에 메모리 공간을 할당받는다
// 프로그램 종료 시 data 영역이 해제된다

// 3. 정적변수(static), 읽기 전용(코드, ROM), data영역을 사용한다
// 4. 외부변수,(extern) , 힙 영역, data 영역을 사용한다

void Test()
{
	int i = 0;
	++i;
}

void Test2()
{
	++g_i;
}

void Test3()
{
	a = 100

}

int main()
{
	// 2. 지역변수(함수 안에 선언된 변수)
	// stack 영역

	// Test 함수가 종료될 때마다 stack이 pop되기 때문에 메모리가 반환된다. i는 0->1을 반복할 것이다.
	Test();
	Test();
	Test();

	// 전역변수의 값을 증가시켰다면, stack이 pop 된다고 해서 메모리가 반환되지 않으므로, g_i는 3만큼 증가하게 될 것이다.
	Test2();
	Test2();
	Test2();

	int a = 0;
	Test3(); // Test3에 a를 집어넣는다고 해도 이 함수 안에는 a가 선언되지 않게 된다.

	return 0;
}
