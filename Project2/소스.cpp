#include <iostream>
#include <windows.h>
#include<cstdlib>
#include<ctime>

using namespace std;
//Game클래스 선언

class Game {
private:
	double energy = 100;
	static int life;

public:
	Game();
	double Damage();
	static void Die();
};
int Game::life = 1;

void Game::Die() {
	life--;
	cout << "**생명이 1 감소하여 " << life << "이 되었습니다." << endl << endl;
	if (life == 0)
	{
		cout << "나 여기서 죽다..";
	}
}
double Game::Damage() {
	double damaged = 0;

	if (energy > 0) {
		damaged += rand() % 100;
		energy -= damaged;
		cout << "에너지가 " << damaged << " 감소하여 " << energy << " 이 되었습니다.\n";
		if (energy < 0) {
			life--;
			energy = 100;
			cout << "생명이 1 감소하여 " << life << "이 되었습니다." << endl << endl;

		}
	}
	return energy;
}
//Game클래스 멤버 함수의 정의
Game::Game()
{
	cout << "쏘우의 방에서 태어났습니다" << "당신의 생명력은" << life << "입니다" << endl;
	Sleep(1000);
	cout << "게임을 시작한다..." << endl;
	Sleep(1000);
}

int main()
{
	Game c1;
	srand((unsigned int)time(NULL));
	int i, j = 0;
	char hi;
	int sum1, sum2;
	int num1 = rand() % 10;
	int gawibawi = rand() % 3;
	cout << "1, 2, 3 중에 골라봐라.." << endl;
	cin >> i;
	cout << "숫자가 맘에 안들어 7번 게임으로 하지" << endl;
	Sleep(1000);
	cout << "게임은 간단하다 1 ~ 10중 숫자 두개를 고르고 내가 뽑은 숫자중에서 너가 고른 숫자가 있다면 살려주지" << endl;
	cin >> sum1 >> sum2;
	cout << "내가 뽑은카드는 ";
	Sleep(2000);
	cout << num1 << "!" << endl;
	if (num1 == sum1 || sum2 == num1)
	{
		Sleep(1000);
		cout << "이걸 맟추네...." << endl;
		Sleep(1000);
		cout << "죽어버려..." << endl;
		c1.Die();
		return 0;
	}
	else
	{
		Sleep(1000);
		cout << "아쉅구만.. 다음 게임으로 가실까" << endl;
		Sleep(1000);
	}
	Sleep(1000);
	cout << "이번게임은 가위바위보다.. 나랑 비긴다면 살려주지 룰은 알고 있겠지?" << endl;
	Sleep(800);
	cout << "가위 ";
	Sleep(800);
	cout << "바위! ";
	Sleep(800);
	cout << "보! ";
	cin >> hi;
	if ('가위' == hi)
	{
		j = 1;
	}
	else if ('바위' == hi)
	{
		j = 2;
	}
	else {
		j = 3;
	}
	cout << "(대충 쏘우는";
	if (gawibawi == 1)
	{
		Sleep(700);
		cout << " 가위를 냈다!)" << endl;
	}
	else if (gawibawi == 2)
	{
		Sleep(700);
		cout << " 바위를 냈다!)" << endl;
	}
	else {
		Sleep(700);
		cout << " 보를 냈다!)" << endl;
	}
	if (j == gawibawi)
	{
		Sleep(1000);
		cout << "흠..." << endl;
		Sleep(700);
		cout << "비겼다니.. 운이 좋군 살아가라.." << endl << endl;
	}
	else {
		Sleep(1000);
		cout << "두번연속으로 못맟췄으면 죽어야지" << endl;
		c1.Die();
	}
	return 0;
}