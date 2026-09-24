#include <iostream>
#include <string>
using namespace std;

string read_name()
{
	string name = "";
	cout << "Please enter your name ? \n";
	getline(cin, name);

	return name;
}
string encrypted_name(string name)
{
	string enc_N = "";
	int i = 0;

	while (i < name.length())
	{
		enc_N += char(name[i] + 2);
		i++;
	}

	return enc_N;
}
string decrypted_name(string enc_N)
{
	string dec_N = "";
	int i = 0;

	while (i < enc_N.length())
	{
		dec_N += char(enc_N[i] - 2);
		i++;
	}

	return dec_N;
}

int main()
{
	string name = read_name();
	string enc_name = encrypted_name(name);
	string dec_name = decrypted_name(enc_name);

	cout << "Text Before Encrypted : " << name << endl;
	cout << "Text After Encrypted : " << enc_name << endl;
	cout << "Text After Decrypted : " << dec_name << endl;

	return 0;
}