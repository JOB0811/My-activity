#include<iostream>
#include<windows.h>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;


class backGround // 繕莫弘 益軒奄 適掘什
{
private:
	const int sunY = 4;
	const int cloudY = 3;

	int sunX = 160;
	int cloudX = 80;
public:
	void heart();
	void sun();
	void cloud();
	void gotoxy(int x, int y);
	void  textColor(int foreground, int background);

};


void backGround::gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void backGround::textColor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


void backGround::sun()
{
	gotoxy(sunX, sunY); // 1虞昔
	textColor(12, 12);
	cout << "けけけけ";
	gotoxy(sunX - 1, sunY + 1); // 2虞昔
	textColor(12, 12);
	cout << "け";
	textColor(14, 14);
	cout << "けけけ";
	textColor(12, 12);
	cout << "け";
	gotoxy(sunX - 2, sunY + 2); // 3虞昔
	textColor(6, 6);
	cout << "け";
	textColor(14, 14);
	cout << "けけけけけ";
	textColor(12, 12);
	cout << "け";
	gotoxy(sunX - 2, sunY + 3); // 4虞昔
	textColor(12, 12);
	cout << "け";
	textColor(14, 14);
	cout << "けけけけけ";
	textColor(12, 12);
	cout << "け";
	gotoxy(sunX - 2, sunY + 4); // 5虞昔
	textColor(12, 12);
	cout << "け";
	textColor(14, 14);
	cout << "けけけけけ";
	textColor(12, 12);
	cout << "け";
	gotoxy(sunX - 1, sunY + 5); // 6虞昔
	textColor(12, 12);
	cout << "け";
	textColor(14, 14);
	cout << "けけけ";
	textColor(12, 12);
	cout << "け";
	gotoxy(sunX, sunY + 6); // 7虞昔
	textColor(12, 12);
	cout << "けけけけ";

}

void backGround::cloud()
{
	goto(13, cloudY);
	textColor()
}



void backGround::heart()
{
	gotoxy(5, 2);
	textColor(4, 4);
	cout << "＝";
	textColor(15, 15);
	cout << "＝";
	gotoxy(4, 3);
	textColor(4, 4);
	cout << "＝＝＝＝＝";
	gotoxy(5, 4);
	textColor(4, 4);
	cout << "＝＝＝";
	gotoxy(6, 5);
	textColor(4, 4);
	cout << "＝";
}




