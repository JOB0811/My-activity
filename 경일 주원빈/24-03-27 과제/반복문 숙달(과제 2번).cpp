#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/*

과제 2. 반복문 숙달 (조건문을 사용해도 되나, 안쓰고 하는 것을 추천한다.)

- 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 구현한다.
	ㄴ 종료 조건: -15를 넘어가면 탈출
	ㄴ 조건 : 입력 받은 값은 -10 ~ +10 사이의 숫자여야 하고 이외의 값이 들어오면 종료

※ while문 사용할것

과정 설계
1. 필요한 변수의 개수? (입력받을 변수,-5 초기화 변수, 값을 저장할 변수) 3개가 필요
2. 0으로 초기화한 변수1, -5 초기화 변수2, 변수1 - 변수2 값을 저장하는 변수3 3개 초기화
3. cin으로 입력받은 후, 입력받은 값이 -10 < n < 10이고, 그외의 값일때는 break;
4. 변수3 <= 15; 일경우 break;




*/


void main()
{
	int i = 0;
	cin >> i;
	do {
		

		if (i < -10 || i > 10) {

			break;
		}

		i -= 5;
		cout << i << endl;


	} while (-10 < i < 10);

}





