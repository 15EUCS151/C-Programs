#include <stdio.h>
int main(void) {
	char c;
	printf("\n Enter a letter to check whether it is a vowel or a consonant:");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	  printf("VOWEL");
	else
	  printf("CONSONANT");
	return 0;
}
