#include <stdio.h>
#include <string.h>

int main()
{
   // MAD LIBS GAME

   char noun[50] = "";
   char verb[50] = "";
   char abjective1[50]="";
   char abjective2[50]="";
   char abjective3[50]="";

   printf("Enter an adjective (description): ");
   fgets(abjective1, sizeof(abjective1), stdin);
   abjective1[strlen(abjective1)-1]='\0';

   printf("Enter a noun (animal or person):");
   fgets(noun, sizeof(noun), stdin);
   noun[strlen(noun)-1]='\0';

   printf("Enter an adjective (description): ");
   fgets(abjective2, sizeof(abjective2), stdin);
   abjective2[strlen(abjective2)-1]='\0';

   printf("Enter a verb (ending w/ -ing): ");
   fgets(verb, sizeof(verb), stdin);
   verb[strlen(verb)-1]='\0';

   printf("Enter an adjective (description): ");
   fgets(abjective3, sizeof(abjective3), stdin);
   abjective3[strlen(abjective3)-1]='\0';

   printf("\nToday, I went to a %s zoo\n", abjective1);
   printf("In an exhibit, I saw a %s\n",  noun);
   printf("%s was %s and %s!\n", noun, abjective2, verb);
   printf("I was %s!\n", abjective3);

   return 0;
}