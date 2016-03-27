#include "Palindrome.h"

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #5
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/29/14
***********************************************************/

Palindrome::Palindrome(string Exp, bool pal)
{
	Expression = Exp;
	palin = isPalindrome();
}
bool Palindrome::isPalindrome()
{
	Stack letterstack;
	ArrayQueue letterqueue;
	ItemType Letter, Begin, End;
	for(int i = 0; i< Expression.length(); i++)
	{
		if(isalpha(Expression[i]))
		{
			Letter.Character = Expression[i];
			Letter.Character = tolower(Letter.Character);  // converts letter to lower case for comparison
			letterstack.push(Letter);  
			letterqueue.enqueue(Letter); // if it is an alpha it will place it on the stack/queue
		}
	}
	while(!letterqueue.isEmpty())
	{
		End = letterstack.top();
		letterstack.pop();
		Begin = letterqueue.dequeue();
		if(End.Character != Begin.Character)
		{
			return false;
		}
	}
	return true;
}
void Palindrome::print(ostream & out) const
{
	if(!palin)
	{
		out << "     " << "** Is NOT a palindrome **\n" <<endl;
	}
	else
	{
		out << "     " << "** Is a palindrome **\n" <<endl;
	}
}