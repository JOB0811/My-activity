#include<iostream>

using std::cout;
using std::endl;
using std::cin;


#pragma region 연산자 + 반복문
/*

▶ 연산자란?

- 프로그램이 동작할 때 정해져 있는 특정 역할을 수행하는 키워드를 연산자라고 한다.
ㄴ 연산자를 이용하면 다양한 프로그램 로직을 만들어내는 것이 가능하다.

▷ 기본적인 연산자의 종류

- 산술 연산자 (+, -, *, /, %)
- 비교 연산자 (==, !=, <, >, <=, >=)
- 할당 연산자 (=, +=, -=, *=, /=, %=)
- 비트 연산자 (&, |, ^)
- 논리 연산자 (&&, ||, !)
- 형변환 연산자 ((특정 자료형))

   ▶ 산술 연산자

   + : 더하기

   - : 빼기

   * : 곱하기

   / : 나누기
   ㄴ 몫을 남길까? / 나머지는 버릴까?


   % : 나머지
   ㄴ 나머지는 남길까?/ 몫은 버릴까?

   ▶ 비교 연산자

   num == num2;      ->      num과 num2가 같다.
   num != num2;      ->      num과 num2가 다르다. (같지 않다.)
   num < num2;         ->      num이 num2보다 작다.
   num > num2;         ->      num이 num2보다 크다.
   num <= num2;      ->      num이 num2보다 작거나 같다.
   num >= num2;      ->      num이 num2 보다 크거나 같다.


   ▶ 할당 연산자

   = : 대입 연산자(결합 방향 = 우 -> 좌)

   - +=
   - -=
   - *=
   - /=
   - %=

   ▷ 비트 연산자 (게임내에서 상태이상 효과를 나타낼때 주로 이용함.)

   -> 상태값 / 색상값 검출

   - 효율적 메모리 사용과 빠른 연산이 장점

   ★★개인 조사★★ 하위 6종의 비트 연산자 조사
   ★★ 비트연산자의 경우, 전공자/유사전공 출신이라면 면접 때 물어볼 수 있음 ★★
   &
   |
   ^
   ~
   <<
   >>

   ※ 공부하다가 bitset 용어 설명 시, -> 탈출

   ★★★ 면접 질문 ★★★ (형변환의 문제점, 단점을 물어볼 수 있음.)
   ▷ 형변환 연산자

   - ((특정 자료형)) 변수형 (int에서 float로 바뀔 때는 문제 없는데, float에서 int로 변환 시, 소수점이 사라져 데이터가 소실될 수 있다.)
   ㄴ int Valueue = 0;
   ㄴ (float)Value;

   - C/C++ 언어는 형변환 연산자를 이용하면 간단하게 해당 변수의 자료형을 변경하는것이 가능하다.
   ex) 가챠 시스템에서 형변환 시스템을 확신 없이 사용했을 경우, 가챠 확률에 큰 변동을 주기 때문에, 게임 재화 시스템에 큰 타격을 줄 수 있다.

   ▷강제 형변환에 대해서.

   - C 스타일의 명시적(어떤 타입으로 바꿔줄지 추상적이지 않게) 형변환은 기본적으로 가독성이 떨어지고 버그가 생길 여지가 다분하다.
   ㄴ "강제"로 형을 바꿔주기 때문
   ㄴ 속도를 챙길것이면 C 스타일로 / 안정성을 챙길것이면 C++ 스타일로

   EX:
   static_cast<int>(obj) -> obj를 type으로 바꾸겠다.
   ㄴ. 단, 논리적으로 가능한 경우에만 변환 수행 -> 안정성 UP

   - C++ 타입 캐스팅 연산자 시리즈
   - static_cast (v)
   - dynamic_cast
   - const_cast
   - reinterpret_cast



▶ 반복문이란?

- 프로그램의 특정 부분을 일정 횟수 이상 반복해서 실행하도록 하기 위한 문법
ㄴ 반복문을 이용하면 반복적으로 발생하는 구간을 효율적/간단하게 처리하는 것이 가능하다.
   ㄴ 문법을 잘 활용하면 편리함과 효율성이 수직 상승

- 반복문의 종류


★★ 만약 면접에서 물어본다면, for와 while보다는 사용성이 적은 do while을 물어볼 가능성이 있다. ★★
1. for문

- 구성
ㄴ 초기식 : 반복을 위한 변수의 선언 및 초기화 수행
ㄴ 조건식 : 반복의 조건을 검사하는 목적으로 선언
ㄴ 증감식 : 반복의 조건을 거짓으로 만드는 증가 및 감소 연산

EX)
for (초기식; 조건식; 증감식)
{
   반복이 되는 문장
}

※ 초기값은 맨 처음 한번만 수행이 되고 조건식이 참인 동안만 명령문을 반복 수행한다.
   ㄴ 반복의 횟수가 정해져 있을 때, for문을 사용한다.

2. while문

- 무한 (loop) : 반복 조건에 1(참)이 들어갈 경우 무한 루프에 빠지게 된다.
   ㄴ 조건이 true(참)일때만 작동
   ㄴ   후에 배울 제어문으로 빠져나올 수 있다.

- while문은 특정 조건을 주고 그 조건을 만족하는 동안 특정 영역을 계속해서 반복하는 구조

※ while문은 반복의 조건을 "거짓"으로 만드는 게 가장 중요하다. (반복의 조건을 부정하지 않으면, 무한루프가 진행 되기 때문)


3. do ~ while문

- while과의 차이점 : 조건을 검사하는 시점이 다르다.
ㄴ 일단 무조건 한번 실행 후 while문의 조건을 검사하여 do ~while문안의 문장을 실행할것인지에 대하여 판단한다.




*/
#pragma endregion

void main() {
    int numberA = 0;
    numberA = 1;
    numberA++;
    numberA = 6;
    numberA++;
    numberA += 5;
    numberA--;
    numberA -= 2;
    numberA *= 3;
    numberA /= 2;

    // ? = 13
    cout << "numberA의 값: " << numberA << endl;


    /*
    C/C++ 언어는 연산자를 이용해서 결과를 만들어낼때 해당 연산자에 사용된 변수의 자료형에 따라서 결과가 달라진다.

    EX)
    정수 + 정수 = 정수
    정수 + 실수 = 실수

    기본적으로 연산자를 사용할때는 동일한 자료형의 변수를 가지고 연산을 하는 것이 원칙이다.
    하지만, 서로 자료형이 다를 경우 연산자에 의한 데이터의 결과는 값을 소실 할 수 있는 위험이 적은 자료형으로 만들어진다.

    단, 나머지 연산자는 정수형 데이터에만 사용하는 것이 가능하다.
    */

    // C 스타일 -> 컴파일러 버전에 따라 유동적
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << "[" << i << " 번째] " << "공부하고 인내하면 너희도 개발자" << endl;
    }

    int numberB = 0;
    for (; numberB < 5; numberB++)
    {
        cout << "이렇게 사용을 하면...? " << endl;
    }

    printf("\n");

    /*
    - for문은 필요에 따라 초기식, 조건식, 증감식 생략이 가능하다.

    - 생략 유형

    1. 초기식 생략 -> for (; i < 10; i++) ex (만약 좀비게임을 한다고 친다면, 참여한 인원수에 비례해서 좀비가 젠되는 숫자가 밸런싱이 되야 하는데, 그때 주로 사용할 수 있다.)
    2. 조건식 생략 -> for (i = 1; ; i++)
    3. 증감식 생략 -> for(; i <10;)
    4. 모두 생략 -> for ( ; ; )
    */

    // i++; 후위
    // ++i; 전위
    int j = 1;
    // 객체지향 스타일 (C++)
    for (int i = 0; i < 5; i++)
    {
        cout << "첫번째 값은? " << ++j << endl; // 전위는 ;이 들어가기 전에, 컴파일러에 진입하자마자 값이 바뀐다. 
        cout << "두번째 값은?" << j++ << endl; // 후위는 ;을 만나고 개행(행이 넘어감)이 된 후에 값이 바뀐다.
    }

    // ★★면접 문제★★ 순서 = 1 2 3 4 (O)
    cout << '\n';
    cout << "\n";
    printf("\n"); // ()이 들어간 것은 기본적으로 함수인데, ()안의 값이 변동될 수 있는(가변적인)값이고, 안에 값이 존재한다면 복사를 진행하기 때문에 절차가 추가된다. -> 느리다.)
    cout << endl; // 템플릿에 포함되어 있으며, endl은 개행은 시켜주지만, 혹시 작성한 뒷라인(화이트라인)의 버퍼가 있는지를 체크한 후 개행을 시켜준다.(매우 느림)

    // 실습
    // ㄴ 1. 1 ~ 10까지 출력 / 2. 10 ~ 1까지 출력 => 2가지를 해본다.
    // 반복문은 중첩될수록 코스트가 매우 커진다.(무거워진다.)(2중까진 사용할 수 있으나, 3중이상으로 사용하는 것은 효율적이지 않다.)

    for (int a = 0; a <= 10; a++)
        cout << a << endl;
    cout << "\n" << endl;
    for (int b = 10; 0 <= b; b--)
        cout << b << endl;

    // 실습 3. 구구단 찍기(2단 ~ 9단) / 4. 구구단이 출력이 되면 가로로 3단씩 출력
    for (int gu = 2; gu < 10; gu++) {
        for (int i = 1; i < 10; i++) {
            for (; gu %= 1;)



                //3번씩 나오면, 줄이 바뀌게 하고 싶다. (해결해보지 못했음.)

                cout << gu << " * " << i << " = " << gu * i << endl;

        }

        // 02. while 문 
    }
        int playerHP = 1000;
        //멤버 변수( ? 질문하기)
        while (playerHP > 0)
        {
            int hit = 100;
            playerHP -= hit;
            cout << "체력 = " << playerHP << endl;
        }

        cout << '\n';

        int numC = 0;

        while (numC < 5) // 반복문을 작성할 때, 변수 선언과 조건선언부는 건드리지 않는 것이 좋다. 반복문 or 조건문의 내부에서 처리하는 것을 목적으로 설계하자!
                         // 코드가 길어질수록, 실행속도 차이면에서 큰 차이가 난다.
        {

            cout << "while문이 돌아간다" << endl;

        }

        cout << '\n';

        cout << "while문 구구단" << endl;

        int k = 2;
        while (k < 10)
        {
            int j = 1;
            cout << k << "단 출력" << endl;

            while (j < 10)
            {
                cout << k << " X " << j << " = " << k * j << endl;
                j += 1;
            }

            k += 1;
            cout << endl;
        }

        // 03. do ~ while문
        /*

        do
        {

        }while (조건식);

        */

        int numD = 0;

        do
        {
            cout << "do ~ while문" << endl;
            numD++;
        } while (numD < -1);

        cout << "\n";

        do
        {
            // 2번?/ 무한?/ 3번? -> 0 -> 1 (출력 1번) 1 - > 2 (출력 2번) 2 -> 3 (출력 3번) 3<3 출력x
            cout << "2번째 do ~while문" << endl;
            numD++;
        } while (numD < 3);

        cout << "\n";

        // 그래서? -> 너(do ~ while)는 언제 쓰는데?

        int total = 0, num = 0;
        do
        {
            cout << "숫자를 입력해라. (단, 0을 입력하면 프로그램을 종료하겠다.)" << endl;
            cin >> num;
            total += num;

        } while (num != 0);

        cout << "숫자의 합좀 보여줘: " << total << endl;

        cout << '\n';


        while (num != 0)
        {
            cout << "숫자를 입력해라. (단, 0을 입력하면 프로그램을 종료하겠다.)" << endl;
            cin >> num;
            total += num;
        }
        /*
        ▶ while문과 do ~while문의 차이점

        -반복의 횟수가 정해져 있다.
        ㄴ 자연스럽게 전환이 된다.

        -반복의 횟수가 정해져 있지 않다.
        ㄴ 이럴때는 고민이 필요하다.

        ※ 위에 do ~ while문을 while문으로 바꾸면 프로그램은 바로 종료된다.
            ㄴ num = 0; 이므로.

        - 코딩 스타일 (유니티 = 자유도↑, 언리얼 = 자유도↓)
        ㄴ 1. 주도적(C#을 이용한 코딩을 할때 효율적) / 2. 방어적(C,C++을 이용한 코딩을 할때 효율적) / 3. 순응하며 갈것인지
        ※ 회사에서는 방어적(변수가 없는 안전한)코딩을 선호하며, 도전적인 것을 좋아하지 않는다. 코딩을 수행할 때는, 수행 코드를 작성하고 한줄씩 확인해보는 습관이 매우 중요하다!


        */

        // 실습
        // ㄴ do ~ while 구구단

        int gugu1 = 2;
        int gugu2 = 1;
        int gugusum = gugu1 * gugu2;

        do {
            cout << gugu1 * gugu2 << " = " << gugusum << endl;
            gugu1++;
        } while (gugu1 < 9);

        // 2 4 6 8 10 12 14 16 18 .....

       

    


        //과제 1

        /*
        과제1. 연산자 활용


        a. 두개의 정수를 받아서 두 수의 덧셈과 뺄셈의 결과를 출력하는 프로그램 작성

        b. 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성
           ㄴ EX : (num1 + num2) * (num3 + num1) % num1 = ?

        c. 입력 받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
           ㄴ EX : 7과 2가 입력되면 몫으로 3, 나머지는 1이 출력되면 OK

        과제2. 별찍기

        - (마름모 우상단/우하단/좌상단/좌하단) 완성체 1가지

        *****
        ****
        ***
        **
        *

        *****
         ****
          ***
           **
            *

        *
        **
        ***
        ****
        *****

            *
           **
          ***
         ****
        *****


             **
            ****
           ******
          ********
         **********
        ************
         **********
          ********
           ******
            ****
             **

        마름모 그려보기

        도전과제1. 마름모 찍기

        - 조건: for문 1번 + 1줄(1줄은 for문 안의 1줄)
           ㄴ조건문 사용 x

        한줄 조사. 조건문.

        - 노트에 적어온다.

        - 비유할 것을 조사해본다.

        */

        // 02. while 문 
    }