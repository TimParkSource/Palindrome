#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "Palindrome.h"

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #5
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/29/14
***********************************************************/

int maintest();
int main()
{
	maintest();
	int numofstrings;
	string Expression;
	Palindrome P;
	
	cout << "Palindrome Testing Program\n" << endl;
	cout << "How many strings do you wish to test? ";
	cin >> numofstrings;
	cout << "\nEnter the strings and press ""Return"" after each one: " << endl;
	cin.ignore();

	for(int i = 0; i< numofstrings; i++)
	{
		getline(cin, Expression);
		P = Palindrome(Expression, false);
		cout << "\n     " << Expression << endl;
		P.print(cout);
	}
	cout << "Thank you for using the Palindrome Testing Program\n" << endl;

	system("pause");
	return 0;
}
int maintest()
{
	Palindrome P;
	P = Palindrome("Hello, how are you", false);
	cout << "Hello, how are you" << endl;
	P.print(cout);

	Palindrome P1;
	P1 = Palindrome("Taco cat", false);
	cout << "\n     " << "Taco cat" << endl;
	P1.print(cout);

	return 0;
}