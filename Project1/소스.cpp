#include <iostream>
#include <string>
using namespace std;
#define MAX_SIZE 10

class Board
{
public:
	static int index;
	static string s[ MAX_SIZE];
	static void add(const char* ca)
	{
		string ss(ca);
		s[index++] = ss;
	}
	static void print()
	{
		cout << "******�Խ��� �Դϴ�******" << endl;
		for (int i = 0; i < index; i++)
		{
			cout << i << ":" <<s[i] << endl;
		}
	}
private:
};
string Board::s[] = { "", };
int Board::index = 0;
int main()
{
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("�ܼҸ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}