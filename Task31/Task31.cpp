#include<string>
#include<iostream>

using namespace std; 

string ReadString()

{
	string S1;
	cout << "\nPlease Enter Your String ?\n";
	getline(cin, S1);

	return S1;

}

char ReadChar()

{
	char CH1;
	cout << "\nPlease Enter a Character ? \n";
	cin >> CH1; 
	return CH1; 
}

char InvertLetterCase(char CH1)
{
	return isupper(CH1) ? tolower(CH1) : toupper(CH1);

}short CountLetter(string S1 , char Letter , bool MatchCase = true )
{
 short Counter = 0; 
for (short i = 0; i < S1.length(); i++)
{
	if (MatchCase)
	{
		if (S1[i] == Letter)
			Counter++;
	}
}

  return Counter; 
}

int main()

{
	string S1 = ReadString();
	char CH1 = ReadChar();

	cout << "\nLetter \ ' " << CH1 << "\' Count = " << CountLetter(S1, CH1);
	cout << "Or \' " << InvertLetterCase(CH1) << " \'";
	cout << "Count  = " << CountLetter(S1, CH1, false);

	system("pause>0");
}