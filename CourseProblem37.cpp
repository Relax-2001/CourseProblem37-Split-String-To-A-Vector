#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

string ReadString()
{
	string UserString = "";
	cout << "Enter a string:\n";
	getline(cin , UserString);
	return UserString;
}

vector <string> SplitString(string UserString , string Delem)
{

	short Pos = 0;
	string Word = "";
	vector<string> vWords;

	while ((Pos = UserString.find(Delem)) != std::string::npos)
	{

		Word = UserString.substr(0, Pos);

		if (Word != "")
		{
			vWords.push_back(Word);
		}

		UserString.erase(0 , Pos + Delem.length());

	}

	if (UserString != "")
	{
		vWords.push_back(UserString);
	}

	return vWords;

}

void PrintVector(vector <string> & vWords)
{

	cout << "Tokens = " << vWords.size() << "\n";

	for (string & Word : vWords)
	{
		cout << Word << "\n";
	}

}

int main()
{

	vector <string> vWords = (SplitString(ReadString(), " "));

	PrintVector(vWords);

	

	return 0;
}

