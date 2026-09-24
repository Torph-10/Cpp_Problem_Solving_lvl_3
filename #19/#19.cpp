#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int random_number(int from, int to)
{
	int random_num = rand() % (to - from) + from;
	return random_num;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << random_number(1, 10) << endl;
	cout << random_number(1, 10) << endl;
	cout << random_number(1, 10) << endl;
	return 0;
}