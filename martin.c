#include "martin.h"
int compWordLetters(char *word, char *letters)
//int check(char *a, char *b)
{
	int wordLen = strlen(word);
	int numOfLet = strlen(letters);
	int valid = 0;

	for(int i = 0; i < wordLen; i++)
	{
		for(int p = 0; p < numOfLet; p++)
		{
			if (word[i] == letters[p])
			{
				valid += 1;
				break;
			}
		}
	}
	if (valid == wordLen){return 1;}
	return 0;
}
