#include <iostream>

using namespace std;

void trimm(string*);

int main()
{
	string s1 = "";

	cin >> s1;

	// Vorher: "   abc def ghi      ";
	cout << "Du hast >>" << s1 << "<< eingegeben" << endl;

	trimm(&s1);

	// Nachher :"abc def ghi";
	cout << "Nach dem trimm: >>" << s1 << "<<" << endl;

	return 1;
}

void trimm(string* str)
{
	if ((*str).length() != 0) {
		int index = 0;
		string tmp = "";
		int len = (*str).length();

		int index_of_first_block_char = 0;
		int index_of_last_block_char = len - 1;

		while ((*str)[index] == ' ') {
			index++;
			index_of_first_block_char++;
		}

		index = len - 1;

		while ((*str)[index] == ' ') {
			index--;
			index_of_last_block_char--;
		}

		for (int i = index_of_first_block_char; i <= index_of_last_block_char; i++)
		{
			tmp += (*str)[i];
		}
		*str = tmp;
	}
	return;
}