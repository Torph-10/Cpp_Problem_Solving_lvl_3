#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum en_character {
	small_Letter = 1,
	Capital_Letter = 2,
	Special_C = 3,
	Digti = 4
};

int random_number (int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char Get_random_character(en_character type_of_char)
{
	switch (type_of_char)
	{
	case en_character::small_Letter:
	{
		return char(random_number(97, 122));
		break;
	}
	case en_character::Capital_Letter:
	{
		return char(random_number(65, 90));
		break;
	}
	case en_character::Special_C:
	{
		return char(random_number(33, 47));
		break;
	}
	case en_character::Digti:
	{
		return char(random_number(48, 57));
		break;
	}
	}
	return '\0';
}

int main()
{
	srand((unsigned) time(NULL));
	
	cout << Get_random_character(en_character::small_Letter) << endl;
	cout << Get_random_character(en_character::Capital_Letter) << endl;
	cout << Get_random_character(en_character::Special_C) << endl;
	cout << Get_random_character(en_character::Digti) << endl;

	return 0;
}