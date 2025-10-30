#include <stdio.h>

int main() {
   char name[100];
   printf("Enter your name again");
   fgets(name, sizeof(name), stdin);
   int yNo = 1;
   int length=0;
   while (yNo ==1) {
      for (int i =0; name[i]!='\0';i++) {
         length++;
      }
      if (length <3) {
         printf("Enter your name again: ");
         fgets(name, sizeof(name), stdin);
      } else {
         yNo = 0;
      }
   }
   int count =0;
   for (int i =0; name[i]!='\0';i++) {
      if (name[i]=='a' || name[i]=='A') {
         count++;
      }
   }
}