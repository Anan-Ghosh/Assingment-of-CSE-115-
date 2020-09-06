#include <stdio.h>
#include <string.h>
void reverse(char* string, int count);

int main()
{
   char string[] = "cat is running";

   //result will be running is cat

   reverse(string, -1);
   printf("%s\n", string);
}


void reverse(char* string, int count) {
   if (count == 0) {
       return;
   }

   int first = 0;
   int second = 0;
   int length = 0;

   for (int i = 0; i < strlen(string); i++) {
       if(string[i] == ' ' && first == 0) {
           first = i;
           length++;
           if (length == count) {
              break;
           }
       } else if(string[i] == ' ') {
           second = first+1;
           first = i;
           length++;
           if (length == count) {
               break;
           }
       }
   }


   if(first == 0 && second == 0) {
       return;
   }
   int flag = 0;
    for(int i = first; i >= 0; i--) {
       char temp = string[i];
       for(int k = i; k < strlen(string) - 1; k++) {
           if(flag > 2 && k == (strlen(string) - flag)) {
               k = strlen(string);
           } else {
               string[k] = string[k+1];
           }
        }
    if(i == second) {
        i = 0;
    }
    if (flag == 0) {
        string[(strlen(string) - 1) - flag] = temp;
        flag++;
    } else {
        string[(strlen(string) - flag)] = temp;
        flag++;
    }
}

count = length;
reverse(string, count - 1);
}
