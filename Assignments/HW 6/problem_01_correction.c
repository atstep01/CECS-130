#include <stdio.h>
#include <string.h>

int main(void) {
	char string[] = "The results were dismal - really dismal. The fees charged were astronomical fees";
	char *c[] = {strstr(string, "Result"), strstr(string, "dismal"), strstr(string, "fees")};
	char *c2[] = {"Result", "dismal", "fees"};
	char *newString1;
	char *newString2;
	int i;
	for (i = 0; i < 3; i++)
	{
		if (c[i] == NULL){
			printf("There are no instances of \"%s\"\n\n", c2[i]);
		} else{
			printf("The first instance of \"%s\" is \"%s\"\n\n", c2[i], c[i]);
		}
	}
	
	newString1 = strstr(string, "dismal") + 6;
	printf(newString1);
	
	
	return 0;
}
