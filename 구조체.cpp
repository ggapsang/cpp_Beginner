#include <iostream>.h

// 구조체 : user define data type
// C style 구조체
// typedef struct _ ... {}UPPER;

typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

typedef struct _tagBig
{
	MYST k;
	int i;
	char c;
}BIG;

// C 문법에서는 구조체 선언시 태그명(struct)를 명시해 주지 않으면 컴파일 오류가 생긴다.
// 자료형을 지칭하는데 매번 귀찮기 때문에 typedef 이후 구조체를 정의하고 }뒤에 이름을 부여한다. 이 경우 굳이 struct를 사용하지 않아도 된다
// C++에서는 해당 방식이 개선되어 필요가 없지만, C, C++ 범용으로 사용하기 위해 C스타일을 쓰는 것이 좋다

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, }; //배열의 경우 초기화 시 나머지 선언하지 않은 칸의 메모리에는 0이 들어간다

	MYST o;

	MYST t = {100, 3.14f}; //구조체 값의 초기화

	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST); 

	return 0;
}

// 자료형도 모둘화가 가능
// 구조체 안에 구조체가 가능함
