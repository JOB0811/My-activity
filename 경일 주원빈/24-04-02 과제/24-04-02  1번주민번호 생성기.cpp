#include<iostream>
#include<stdlib.h>
#include<time.h>



using std::string;
using std::cout;
using std::cin;
using std::endl;

/*
(오늘 배운 문자열 지식을 이용해서 과제를 만들어보자. / 4대 문자열 시리즈는 사용하지 않았으면 좋겠다)
과제1.주민번호 생성기

- 시작하면 원하는 생년월일 년도를 입력 받는다. (4자리, 2자리)
ㄴ 1980 / 80 = > 20 / 05 (24년도보다 이후거나 너무 이전년도일경우 자동으로 앞자리 수가 적용되게 조건 적용)

ㄴ 월과 일을 입력(2자리, 1자리)
ㄴ EX : 06 / 6

ㄴ 예외처리 : 31일이 있는 달과 30일 까지만 있는 달, 2월도 처리를 해올 것

- 성별 선택
ㄴ 남자는 1 또는 3 / 여자는 2 또는 4
ㄴ 만약 다른 값을 입력하면 성별을 랜덤하게 설정한다.

- 그리고 마지막 6자리는 랜덤으로 출력
ㄴ 단 0이 오면 안된다. (뒷자리 주민번호를 생성할때 0이라는 숫자가 하나라도 들어가면 안되게 예외처리)
*/


int year4[4];
int year2;
int monthDay[4];
char DecideSex;
int backnumber6[6] = {};




void main()
{
	cout << "생년 월일을 입력해 주세요 (4자리or2자리) : " << endl;
	
	for (int i = 0; i < 4; i++)
	{
		cin >> year4[i];
	}

	cout << year4;
}


