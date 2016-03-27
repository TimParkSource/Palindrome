#pragma once
#ifndef Palindrome_H
#define Palindrome_H
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cctype> 
#include <iomanip>
#include "Stack.h"
#include "ArrayQueue.h"
using namespace std;

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #5
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/29/14
***********************************************************/
class Palindrome
{
protected:	
	string Expression;
	bool palin;
	bool isPalindrome();
public:
	Palindrome(string Exp = "", bool pal = false);
	void setExpression(string Exp);
	void print (ostream & out) const;
};



#endif