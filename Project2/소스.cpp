#include <iostream>
#include <windows.h>
#include<cstdlib>
#include<ctime>

using namespace std;
//GameŬ���� ����

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
	cout << "**������ 1 �����Ͽ� " << life << "�� �Ǿ����ϴ�." << endl << endl;
	if (life == 0)
	{
		cout << "�� ���⼭ �״�..";
	}
}
double Game::Damage() {
	double damaged = 0;

	if (energy > 0) {
		damaged += rand() % 100;
		energy -= damaged;
		cout << "�������� " << damaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
		if (energy < 0) {
			life--;
			energy = 100;
			cout << "������ 1 �����Ͽ� " << life << "�� �Ǿ����ϴ�." << endl << endl;

		}
	}
	return energy;
}
//GameŬ���� ��� �Լ��� ����
Game::Game()
{
	cout << "����� �濡�� �¾���ϴ�" << "����� �������" << life << "�Դϴ�" << endl;
	Sleep(1000);
	cout << "������ �����Ѵ�..." << endl;
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
	cout << "1, 2, 3 �߿� ������.." << endl;
	cin >> i;
	cout << "���ڰ� ���� �ȵ�� 7�� �������� ����" << endl;
	Sleep(1000);
	cout << "������ �����ϴ� 1 ~ 10�� ���� �ΰ��� ���� ���� ���� �����߿��� �ʰ� �� ���ڰ� �ִٸ� �������" << endl;
	cin >> sum1 >> sum2;
	cout << "���� ����ī��� ";
	Sleep(2000);
	cout << num1 << "!" << endl;
	if (num1 == sum1 || sum2 == num1)
	{
		Sleep(1000);
		cout << "�̰� ���߳�...." << endl;
		Sleep(1000);
		cout << "�׾����..." << endl;
		c1.Die();
		return 0;
	}
	else
	{
		Sleep(1000);
		cout << "�ƚZ����.. ���� �������� ���Ǳ�" << endl;
		Sleep(1000);
	}
	Sleep(1000);
	cout << "�̹������� ������������.. ���� ���ٸ� ������� ���� �˰� �ְ���?" << endl;
	Sleep(800);
	cout << "���� ";
	Sleep(800);
	cout << "����! ";
	Sleep(800);
	cout << "��! ";
	cin >> hi;
	if ('����' == hi)
	{
		j = 1;
	}
	else if ('����' == hi)
	{
		j = 2;
	}
	else {
		j = 3;
	}
	cout << "(���� ����";
	if (gawibawi == 1)
	{
		Sleep(700);
		cout << " ������ �´�!)" << endl;
	}
	else if (gawibawi == 2)
	{
		Sleep(700);
		cout << " ������ �´�!)" << endl;
	}
	else {
		Sleep(700);
		cout << " ���� �´�!)" << endl;
	}
	if (j == gawibawi)
	{
		Sleep(1000);
		cout << "��..." << endl;
		Sleep(700);
		cout << "���ٴ�.. ���� ���� ��ư���.." << endl << endl;
	}
	else {
		Sleep(1000);
		cout << "�ι��������� ���������� �׾����" << endl;
		c1.Die();
	}
	return 0;
}