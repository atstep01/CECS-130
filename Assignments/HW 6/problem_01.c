/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 01     */
/*******************/

#include <stdio.h>
#include <string.h>

int main()
{
	//initialize all the strings
	char sentence[] = "The results were dismal - really dismal. The fees charged were astronomical fees";
	char wordOne[] = "Result";
	char wordTwo[] = "dismal";
	char wordThree[] = "fees";
	
	//print sentence
	printf("%s\n", sentence);
	
	//see if each word is found, if it was say it was found, if not then say it wasnt
	if(strstr(sentence, wordOne) != NULL)
	{
		printf("\n%s was found in the sentence.", wordOne);
		//printf("\n%s", strstr(sentence,wordOne));
	}
	else
	{
		printf("\n%s was not found in the sentence.", wordOne);
	}
	
	if(strstr(sentence, wordTwo) != NULL)
	{
		printf("\n%s was found in the sentence.", wordTwo);
		//printf("\n%s", strstr(sentence,wordOne));
	}
	else
	{
		printf("\n%s was not found in the sentence.", wordTwo);
	}
	
	if(strstr(sentence, wordThree) != NULL)
	{
		printf("\n%s was found in the sentence.", wordThree);
	}
	else
	{
		printf("\n%s was not found in the sentence.", wordThree);
	}
	
	return 0;
}
