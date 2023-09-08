// 문자 입출력
#include <iostream>.h
int factorial_Re(int _iNum);
int Fibonacci_Re(int _iNum);


int main()
{
	int i = 4;
	int j;

	factorial_Re(4);
	j= Fibonacci_Re(10);


	return 0;
}
// factorial 함수
int factorial_Re(int _iNum)
{
	if (1 == _iNum)
	{
		return 1;
	}
	else
	{
		return _iNum * factorial_Re(_iNum - 1);
	}
}

// 피보나치 수열
// 1 1 2 3 5 8 13 21 35 ....

int Fibonacci_Re(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}
	else
	{
		return Fibonacci_Re(_iNum - 1) + Fibonacci_Re(_iNum - 2);
	}
}
