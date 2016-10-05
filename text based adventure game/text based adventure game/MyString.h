#pragma once
class MyString
{
private:
	char m_word[255];
	int size;
public:
	//Todo
	MyString() {};
	MyString(char *a);
	//Constructors

	int Size(); //queries the string's length returning an integer
	char Index(int index); //accesses a character at a certain index
	bool Compare(MyString w); //takes the sizes of each string and returns true or false
	char* Append(MyString cat); //takes the object string attaches the parameter string
	char* Prepend(MyString tac); //takes the parameter string in and attaches the object string
	const char* ToConstant(); // returns the object as a constant character 
	void ToLower(); //converts the object string to a lowercase version of itself
	void ToUpper(); //converts the object string to a lowercase version of itself
	bool findSub(MyString sub); //checks if argument string is within object string
	bool findIndexSub(int Index, MyString sub); //checks if sub string exists by index
};


//unable to find a solution to incompleted functions. i could understand how they work
// i could not figure out how to optimize what ive learned to make those functions work
// i have also come to the conclusion that alot of the functions required a higher level \
// of knowledge to complete but because i spent so much time trying to figure it out 
// on my own the time that i asked for help was too late. i try to 
// do what i can without as much help in order to understand better.