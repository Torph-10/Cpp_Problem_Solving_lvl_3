#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct game_data
{
	int how_many_question = 0;
	int how_many_level = 0;
	int how_many_operation_type = 0;
};
struct Ques_level
{
	int number1 = 0;
	int number2 = 0;
	int result = 0;
	int answer = 0;
};
int random_number(int from, int to)
{
	int number = (rand() % (to - from + 1) + from);

	return number;
}

int main()
{
	cout << "random_number(1, 9)";

	return 0;
}