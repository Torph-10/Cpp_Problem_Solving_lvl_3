#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct strgamedata {
	int rounds = 0;
	int player = 0;
	int computer = 0;
	int draw = 0;
	string finalwinner = "";
};
strgamedata x;
int rand_number(int from, int to)
{
	int number = rand() % (to - from + 1) + from;
	
	return number;
}
int read_round(string text)
{
	int number = 0;

	do
	{
		cout << text;
		cin >> number;
	} while (number < 1 || number > 10);

	return number;
}
int read_number(string text)
{
	int number = 0;

	do{
		cout << text;
		cin >> number;
	} while (!(number >= 1 && number <= 3));

	return number;
}
string the_winner(int player, int computer)
{
	if (player == computer)
		return "No Winner";
	else if (player == 1 && computer == 3)
		return "Player";
	else if (player == 3 && computer == 1)
		return "Computer";
	else if (player > computer)
		return "Player";
	else
		return "Computer";
}
string print_choices(int choice)
{
	if (choice == 1)
		return "Stone";
	else if (choice == 2)
		return "Paper";
	else if (choice == 3)
		return "Scissors";
}
void turn_colors(string roundwinner)
{
	if (roundwinner == "No Winner")
		system("color 6F");
	else if (roundwinner == "Computer")
	{
		cout << "\a";
		system("color 4F");
	}
	else
		system("color 2F");
}
void print_rounds_result(int round, string player, string computer, string round_winner)
{
	turn_colors(round_winner);
	cout << "__________________ Round [" << round << "] __________________\n\n";
	cout << "Player1 Choice : " << player << endl;
	cout << "Computer Choice : " << computer << endl;
	cout << "Round Winner : [" << round_winner << "]" << endl;
	cout << "______________________________________________\n\n";
}
void store_data(int rounds, string winner, string finalwinner)
{
	x.rounds = rounds;
	if (winner == "Computer")
		x.computer += 1;
	else if (winner == "Player")
		x.player += 1;
	else if (winner == "No Winner")
		x.draw += 1;
	x.finalwinner = finalwinner;
}
void Manage_rounds(int rounds)
{
	int i = 1;
	int player = 0;
	int computer = 0;
	string winner = "";

	while (i <= rounds)
	{
		cout << "Round [" << i << "] begins :\n\n";
		player = read_number("Your Choice : [1]:Stone, [2]:Paper, [3]:Scissors ?\n\n");
		computer = rand_number(1, 3);
		winner = the_winner(player, computer);
		print_rounds_result(i, print_choices(player), print_choices(computer), winner);
		if (i == rounds)
			store_data(rounds, winner, winner);
		else
			store_data(rounds, winner, "");
		i++;
	}
}
void game_over()
{
	cout << "                    _____________________________________________________\n\n";
	cout << "                                         +++ Game Over +++\n\n";
	cout << "                    _____________________________________________________\n\n";
	cout << "                    ________________________[Game Results ]_______________\n\n";
	cout << "                    Game Rounds        : " << x.rounds << endl;
	cout << "                    Player1 Won Times  : " << x.player << endl;
	cout << "                    Computer Won Times : " << x.computer << endl;
	cout << "                    Draw Times         : " << x.draw << endl;
	cout << "                    Final Winner       : " << x.finalwinner << endl;
	cout << "                    _____________________________________________________\n\n";
}
void rest_game(char c)
{
	if (c == 'Y' || c == 'y')
	{
		system("color 07");
		system("cls");
	}
	else if (c == 'N' || c == 'y')
		return;
	else
		cout << "WRONG ANSWER !!!\a";
}
void check_to_play_again()
{
	char answer;

	do
	{
		Manage_rounds(read_round("How Many Rounds 1 t 10 ?\n"));
		game_over();
		cout << "Do you want to play again ? Y/N ?\n";
		cin >> answer;
		rest_game(answer);

	} while (answer == 'y' || answer == 'Y');
}
 
int main()
{
	srand((unsigned)time(NULL));

	check_to_play_again();

	return 0;
}