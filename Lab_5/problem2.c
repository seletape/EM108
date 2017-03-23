#include <stdio.h>
#include <string.h>

int key;
int i;
char text[100];

int main()
{
   printf("Welcome to The Ceasar Cipher Program!\n");

   printf("Enter the text to be encrypted: ");
   gets(text);
   printf("\n");
   //scanf("%s", text);

   printf("Please enter the key for this encryption [Natural Number]: ");
   scanf("%d",&key);
   printf("\n");

   if(key  > 26) {
     key=key % 26;
   }

   for(i=0; i < strlen(text); i++) {
       if(text[i]== ' ') {
          printf(" ");
        }

       else {
          if(text[i] >= 'z') {
             text[i] = text[i] - 26;
           }

         text[i] = text[i] + key;
        }
    }

    printf("The cipher text is: %s\n",text);
    printf("Goodbye from The Ceasar Cipher Program!\n");
    return 0;
}
