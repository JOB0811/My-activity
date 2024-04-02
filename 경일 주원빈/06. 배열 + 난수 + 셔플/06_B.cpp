//Example_06_B
#define asd 1;
#include <iostream>
#include <time.h>
#include <random>


using std::cout;
using std::cin;
using std::endl;

#pragma region 난수+셔플
/*

	난수 (random number)
	무작위로 만들어지는 알수 없는 값을 의미한다.
	ㄴ 패를 무작위로 섞거나/ 적의 움직임을 미리 알 수 없도록 하기 위해 난수 필요.
	
	난수 생성 루틴
	-난수 생성 루틴 규칙에 변화를 줄수 있는게 srand(time(null))
	srand 자체는 난수 발생기에 난수를 발생시키는 시작점을 제공하고 이는
	난수 발생기로 하여금 난수를 발생시키는 기준점이 된다.
	-기본적으로 난수 발생기가 실행될 시간은 예측을 할 수가 없기 때문에
	시간값을 시작점으로 사용한다면 난수를 생성할 수 있었던 것.

	불완전 난수--

	시작점: 무한히 많은 시간값들 속에서(os가 부팅된 이후 시간) double단위 만큼 체크) 15~17자리 2초로 바뀐다는것은
	       1~2초에서 임의의 숫자값 똑같은 1초라도  총 경우의수가 10^17이기 때문에 겹칠일이 거의 없다.
		   이것이 난수를 발생시키는 기준점이 된다.

		   기본적으로 실행시간은 예측을 할수가 없기 떄문에 시간값을 시작점으로 사용.
		   32비트 기준으로 작성되었기 때문에 오류가 조금 생긴다.( 1~100 랜덤으로 뽑을떄 생각보다 골고루 나오지 않음)
	완벽한 난수--
		   - srand/rand() 함수의 조합은 완벽한 난수를 생성할 수 없기 때문에
		   c++11에서 새롭게 추가된 Random Number Generator (랜덤 디바이스)

		   = c++ Boost(라이브러리) 에서 추가된 케이스
		   ㄴ c# .net 개정판에서 추가.
		   ㄴ 64비트 형태의 난수를 지원. 
		   ㄴ 졸라 무거움. 계산을 많이해야함.
		   ㄴ 메르센 트위스터 19937 난수생성기
				
		   
*/
#pragma endregion
void main()
{
	srand(time(NULL)); //랜덤 시드 초기화
	int damage = rand() % 10 + 1;
	cout << "데미지:" << damage << endl;
	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", rand());
	}
	//셔플(데이터를 섞는 행위)
	// ㄴ <algorithm>헤더파일이 존재한다. -> x
	int num[10];
	int dest, sour, temp; //시작점, 도착점,임시값
	
	for (int i = 0; i < 10; i++)
	{
		num[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl;
	}
	for (int i = 0; i < 100000; i++)
	{
		dest = rand() % 10; // dest 값에 0~9정수값을 무작위로 대입
		sour = rand() % 10; // sour 값에 0~9정수값을 무작위로 대입
		temp = num[dest];
		num[dest] = num[sour];
		num[sour] = temp;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl;
	}

	/*auto setNum = []() -> void  룰렛 시각화 교수님 힌트 (이걸 왜 사용하면 편한지 고민해봐라.)
	{

	};
	setNum;
	*/

	//디바이스 생성
	std::random_device oRandomDevice; // o = object

	// 시드 설정 (난수 생성 엔진 초기화)
	std::mt19937_64 rnd(oRandomDevice());


	cout << "랜덤 디바이스: \n" << rnd << endl;

	int RandomMin = 1;
	int RandomMax = 10;

	//범위 설정
	// 원래 쓰던 type과 std형 난수 생성문의 차이 = 사용자가 세부 값을 지정해줄 필요없이 메모리 사용측면에서 컴퓨터가 알아서 조절해주겠다.
	// 원래 쓰던 난수 생성 = 시골길 / std::형 난수 생성 = 아스팔트 도로
	// ㄴ 정수
	std::uniform_int_distribution<int> range(RandomMin, RandomMax);

	// 실수
	std::uniform_real_distribution<float> range(RandomMin, RandomMax);

	//정규 분포
	std::normal_distribution<double> range(RandomMin, RandomMax);

	cout << '\n';

	int RandomValue = range(rnd);

	cout << "추출값: " << RandomValue << endl;

	int numberA = (oRandomDevice() % 10) + 1;
	int numberB = (oRandomDevice() % 10) + 1;

	int numberA = (rand() % 10) + 1;
	int numberB = (rand() % 10) + 1;
	//★ oRandomDevice와 rand의 차이점 별도 조사해보기!


}


/*
	과제1. 게임 평가값 구하기(평균)
	-항목은 6가지
	-게임 평가: 캐릭터/배경/퀘스트/아이템/과금력/레이드 등등...
	-조건: 1차원 배열로 값을 정하고 평균값을 구해서 출력.
		   1차원 배열로 값을 세팅하고 내가 값을 입력하면 평균값을 구해서 출력한다.

	과제2. 슬롯머신 
	-777 같은 숫자가 3개 나올시 배팅금액의 12배
	- 7을 제외한 같은 숫자 3개 나올시 배팅금액 5배
	-같은 숫자 2개 나올시 배팅금액의 2배
	- 그외에는 배팅금액 잃기
	-기본 소지금 : 10,000원 / 최소 배팅 : 1,000/ 배팅 단위 : 1,000

	필수: 
	1. 룰렛이 동작한는 못브을 ->시각화 해올것
	
	2. 배팅을 하고 내가 룰렛을 멈추지 않으면 룰렛은 자동으로 계속 반복한다.

	3. 치트가 활성화 되면 숫자 3개를 입력 받는다.
	ㄴ 치트로 입력된 숫자는 다음번 룰렛이 시동될떄 당첨되는걸 확인할 수 있게.

	//한줄조사 
	- 노트에 적어온다. 문자열
	- 비유할것 생각해 온다.




*/