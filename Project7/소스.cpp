#include <iostream>

using namespace std;

class person
{
public:
	int money;
	static int sharedMoney;
	void addMoney(int money)
	{
		this->money += money;
	}
	void addshared(int sharedMoney)
	{
		this->sharedMoney += sharedMoney;
	}
private:
};
int person::sharedMoney = 0;
int main()
{
	person han;
	han.money = 100;
	han.sharedMoney = 200;

	person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addshared(200);
	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}