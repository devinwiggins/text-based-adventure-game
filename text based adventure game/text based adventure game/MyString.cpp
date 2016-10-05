#include <iostream>
#include <string>
#include "MyString.h"

MyString::MyString(char *a)
{
	int i;
	int len = 0;
	while (a[len] != '\0')
	{
		len++;
	}
	size = len;
	for (i = 0; i < size; i++)
	{
		m_word[i] = a[i];
	}
	m_word[size] = '\0';
}
int MyString::Size()
{
	return size;
}
char MyString::Index(int index)
{
	/*as function is called the input index being searched will loop through
	the string and return the index */
	//char i;
	if (index >= 0 && index < Size()) // if index(the variable) is greater than or
		// equal to 0 and less the the size the index will be returned
		return m_word[index];
	
	return '?'; // if the input is invalid the functiopn returns '?'

	// no less than 0 no greater than size
};
bool MyString::Compare(MyString w)
{
	int x = 0;
	if (Size() != w.Size())
		return false;
	for (x = 0; x < Size(); x++)
	{
		if (m_word[x] != w.m_word[x])
			return false;
	}
	//Check if words are the same length.
	//Loop through all characters of both words until a character is different at 
	// that index.
	//If no characters are different the words are the same.

	return true;
}
char* MyString::Append(MyString cat)
{
	char *arr = new char[cat.Size() + Size() - 4]; //allocates dynamic memory of strings 
	int it = 0;
	for (int i = 0; i < Size(); i++)
	{
		arr[i] = m_word[i];
	}                        // sets arr pointer to word
	for (int i = Size(); i < cat.Size() + Size(); i++)
	{
		arr[i] = cat.m_word[it];
		it++;
	}
	return arr;
}
char* MyString::Prepend(MyString tac)
{
	char *arr = new char[tac.Size() + Size() - 4];
	int it = 0;
	for (int i = 0; i < tac.Size(); i++)
	{
		arr[i] = tac.m_word[i];
	}
	for (int i = tac.Size(); i < Size() + tac.Size(); i++)
	{
		arr[i] = m_word[it];
		it++;
	}
	return arr;
}
const char* MyString::ToConstant()
{
	return m_word;
}
void MyString::ToLower()
{
	for (int i = 0; i < Size(); i++)
		// i is supposed to go through the string checking each letter
	{
		if (m_word[i] >= 'A' && m_word[i] <= 'Z')
		{
			m_word[i] = (int)m_word[i] + 32;
		}
	}
			// this is supposed to return the value of 
			// the letter that i's address is equal to, plus 32.
			// the 32 takes the ascii character's place value on the ascii table
			// and adds it by 32 in order to match its lowercase counterpart
}
void MyString::ToUpper()
{
	for (int i = 0; i < Size(); i++)
	{
		if (m_word[i] >= 'a' && m_word[i] <= 'z')
		{
			m_word[i] = (int)m_word[i] - 32;
		}
	}
}

bool MyString::findSub(MyString sub)
{
	int i = 0;
	for (int it = 0; it < sub.Size() && i != ' '; it++)
	{
		for (i; i < Size(); i++)
		{
			if (m_word[i] == ' ') // this probably is redundant but it basically skips check
								  // of space characters
			{
				continue;
			}
			if (m_word[i] == sub.m_word[it]) // if the characters match the nested for loop 
											 // is broken and the outer for loop continues
			{
				break;
			}
		}
		if (m_word[i] != sub.m_word[it] && m_word[i] == '\0') // if the string has ended and the
															// string was not found it returns
														   // false
			{
				return false;
			}
	}
	return true;
}
bool MyString::findIndexSub(int Index, MyString sub)
{
	int it = 0;
	{
		for (int i = Index; i < Size() && i != ' '; i++)// increments i to check continuous character spaces unless it 
														//hits a space character
		{
			if (m_word[i] == sub.m_word[it])
			{
				it++;
				continue;
			}
			
			if (m_word[i] != sub.m_word[it] && sub.m_word[it] != '\0') // if the letter do not match at any point it returns false
																		// null character check statement cannot be executed if it is false
			{
				return false;
			}
			if (sub.m_word[it] == '\0')// after full check if the words are equal the loop breaks and returns true
			{
				break;
			}
		}
	}
	return true;
	// this function will return true or false whether the argument string is the sub string specified by Index
}