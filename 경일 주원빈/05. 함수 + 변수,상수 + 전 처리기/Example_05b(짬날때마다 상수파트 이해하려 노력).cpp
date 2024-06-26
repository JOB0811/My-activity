#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#pragma region 상수
/*

▶ 상수란? (상수를 길게 설명하는 이유? 중요함)

- 변수와 달리 저장된 데이터를 변경할 수 없는 공간에 붙여진 이름을 의미한다.
ㄴ 상수는 한번 데이터가 저장되고 나면 변경하는 것이 일반적으론 불가능하다. (C++만 변경하는 것이 가능하다.)

- 상수의 종류

- 리터럴 상수(이름이 없는 상수) (메모리에 넣을 필요가 없는 상수를 지칭)
ㄴ 이름이 없는 상수라고 하며 임시 값이라고도 지칭한다.
ㄴ EX : 1, 3.14, 'C' 등등....

- 심볼릭 상수 (이름이 존재하는 상수)
ㄴ 심볼릭 함수는 const라는 키워드를 통해서 선언이 가능하고 리터럴 상수와 달리
이름을 통해서 안에 저장되어 있는 데이터를 읽어 들이는 것이 가능하다.
ㄴ EX. const 한정자를 통해 만들어진 변수 / 네이밍
	ㄴ int number = 100; => 	const int number = 100; (number는 상수화 되었다.)

	C

▶ Constexpr
- 이 키워드는 C++11에서 추가됬다.
ㄴ 객체나 함수 앞에 붙일 수 있는 키워드로 해당 객체나 함수의 반환값을 컴파일 타임에 알 수 있다.
ㄴ C++17부터는 람다식에 적용가능

★★ 면접 문제 예시  -> Const와 Constexpr에 대해서 각각 얘기해보세요.
= Const는 런타임 창이 실행되기 이전에 값이 확정되고, Constexpr은 컴파일 타입에 값이 결정된다.

컴파일러의 특징
 = 링커에게 obj파일을 전달받기 전까지 코드를 전체적으로 읽는다. (오류가 있든 없든 전체적으로 읽는다.)


★ 무엇보다 컴파일 타입에 값이 결정(Constexpr)되므로 함수 호출간 템플릿 인자로 넘겨줄 때 아주 유용하다.

- 상수는 초기화 될때 값이 정해져야함 . -> 할당으로는 쓸 수 없음,

- const/ constexpr의 차이점?
- 초기화 여부/ 오류 발견시기
- 런타임 이전까지 지연시킬 수 있느냐 / 컴파일 타임에 잡아낼 수 있으냐의 차이


▶ Readonly

-c#(C#에서 지원하는 상수화 키워드)



const VS Readonly


const
ㄴ. 초기화 이후 값을 변경할 수 없다.
ㄴ. 선언하는 시점에만 초기화 가능
ㄴ. 컴파일 타입 상수

ReadOnly
ㄴ 초기화 이후 값을 변경할 수 없다.
ㄴ. 단, 선언하는 시점과 생성자에서 초기화가 1번 가능하다
ㄴ. 런타임 상수
※ 컴파일 타입 상수는 변수가 실제 값으로 대체가 되고 런타임 상수는 변수의 참조 형식이기 때문에 성능과 속도를 고려하면 const > readonly

※하지만 인스턴스마다 다른 값을 할당하고 싶으면 / 사용자 정의 자료형 => Readonly

★★수업을 들을때마다 상수 파트로 넘어와서 다시 읽어보고 이해하려 시도하기★★




- define vs const ★★★ 면접 예상문제 가능 ★★★


- 메모리 할당 여부(가장 큰 차이)
ㄴ 리터럴 X / 심볼릭 O
ㄴ const(심볼릭)는 메모리를 할당 받고 / #define(리터럴) 메모리를 차지하지 않는다.

- #define은 데이터가 저장된 메모리 공간을 가르키는 리터럴 상수이며, 별도의 메모리를 할당하지 않는다.

- const는 심볼릭 상수로 별도의 메모리를 할당받는 변수이므로 타입을 지정해 줘야 한다.
ㄴ 스텍 영역이라는 곳에 할당되기 때문에 필드(main함수)가 종료되면 메모리가 해제된다. (면접!)
ㄴ 또한 타입체크가 발생하기 때문에 컴파일 과정에서 타입에 대한 오류를 확인할 수 있다. (면접!)
ㄴ 유지보수를 신경쓴다면 Const, 메모리 설계를 신경쓴다면 define알 사용하자!(면접!) ★★

// - 하나 더 얘기하면 const의 경우 이니셜라이저를(Class)


*/
#pragma endregion

void main()
{

	cout << " == 리터럴 상수 ==" << endl; //시간을 들여서 공부를 해야 할 것(추론으로 해결X, 암기)
	cout << "정수형 : " << 10 << "," << 10L << "," << 10LL << endl;
	cout << "실수형 : " << 3.14f << "," << 3.14 << endl;
	cout << "문자형 :" << 'A' << endl;

	printf("\n");
	cout << "== 심볼릭 상수 ==" << endl;

	const int nValue = 0;
	const float fValueA = 3.14f;
	const double dbValueA = 3.14;

	//cout << "출력 값: " << nValue;
	printf(" %d, %f, %lf\n", nValue, fValueA, dbValueA);

	// ★ 손코딩/문답식(5지선다) ★
	const int cNumberA = 100; // 앞에 붙이든 뒤에 붙이든 똑같다.
	int const cNumberB = 200; // 앞에 붙이든 뒤에 붙이든 똑같다.
	
	// x -> *
	// * : C언어 문법 -> 포인터
	// 포인터 ? : 변수명이 가리키는 주소의 값을 변경할 수 없다. (주소 상수화를 의미)
	const int * cNumberC;

	int pNum;
	//포인터 변수의 상수화
	int* const cNumberD = &pNum;
	//변수명이 가리키는 주소와 그 주소의 값도 상수화
	const int* const cNumberE = &pNum;

}