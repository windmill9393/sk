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
		cout << "******게시판 입니다******" << endl;
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
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("잔소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}