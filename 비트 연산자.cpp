#include <iostream>
// 각각의 디파인들이 32비트 각 자리수의 칸에 들어간다
// 2의 승수로 특정 상태들이 올라감
/*
#define HUNGRY 1
#define THIRSTY 2
#define HOT 4
#define ANGRY 8
#define TIRED 16
*/
// 16진수로 표현함 0x1
#define HUNGRY 0x001
#define THIRSTY 0x002
#define HOT 0x004
#define ANGRY 0x008

#define TIRED 0x010
#define POSION 0x020
#define SLEEP 0x040
#define SMOKE 0x080

#define BREAK 0x100
#define SCARED 0x200
#define WHAT 0x400
#define DEATH 0x800




int main()
{
	//비트 단위의 연산
	//비트 시프트 <<, >> 비트를 화살표가 가리키는 방향으로 한칸씩 밀어냄
	/*
	11111111
	*/
	unsigned char byte = 10;

	byte <<= 1; //00000001이 00000010로 2배 증가함, 2일 경우 4배, 3일 경우 8배 증가함. 2^n

	byte >>= 1; //2로 나눈 몫, 또는 2^(-n)

	std::cout << byte;

	//비트곱(AND)(&), 비트합(OR)(|), xor(^), not(~)

	
	/*************비트 연산자의 사용례****************************/

    //게임 캐릭터의 상태를 이런 식으로 define 값에 할당한다(가독성), 유지보수에 매우 유리함
	// 32비트라면 각각의 칸들을 32개의 상태로 하고 이를 bool 값으로 이해할 수 있다.
	// 예 
	// 00000000000000000000000000000000  : 32비트에 첫 번째 자리수를 hungry라 하면
	// 00000000000000000000000000000001 은 HUNGRY 상태
	// 00000000000000000000000000000010 은 THIRSTY 상태
	// 00000000000000000000000000000100 은 HOT 상태
	// 00000000000000000000000000001000 은 ANGRY 상캐

	unsigned int iStatus = 0;

	iStatus |= HUNGRY; //배고픈 상태를 추가 (or 비트합 연산으로 추가함)
	iStatus |= THIRSTY; //목마른 상태를 추가 (or 비트합 연산으로 추가함)
	iStatus |= HOT; //더운 상태를 추가 (or 비트합 연산으로 추가함)

	iStatus &= ~THIRSTY; //목마른 상태를 추가 (and 연산에 ~한 상태(0)으로 곱해줌)

	if (iStatus & THIRSTY) // 캐릭터의 상태가 thirsty인지 확인할 떄
	{

	}

	// 비트 연산의 특징을 이용하여 한 비트 안에서 여러 가지 상태값을 다룰 수 있다

	
	return 0;
}
