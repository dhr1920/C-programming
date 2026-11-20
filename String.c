// length of String________________________________________________________________________________________________

/*#include <stdio.h>
#include<string.h>

void main(){
char str[]= "shivam";

printf("length of String is= %d", strlen(str));
}*/


// lowercase and uppercase__________________________________________________________________________________________
/*#include <stdio.h>
#include<string.h>

void main(){
char str1[]= "SHIVAM";
char str2[]= "shivam";
printf("%s\n", strlwr(str1));
printf("%s", strupr(str2));
}*/

// copy String to another String______________________________________________________________________________________
/*#include <stdio.h>
#include <string.h>

void main(){
char str1[5], str2[5];
scanf("%s", str1);
strcpy(str2, str1);
printf("copied string= %s", str2);
}*/


// compare two String___________________________________________________________________________________________________
/*#include <stdio.h>
#include<string.h>

void main(){
char str1[100], str2[100];
scanf("%s %s", str1, str2);
int result= strcmp(str1, str2);

if (result==0){
    printf("both String are same");
}
    else if(result>0){
        printf("%s is greater", str1);
    }
    else{
        printf("%s is greater", str2);
    }

}*/

// reverse a string________________________________________________________________________________________________________________

/*#include <stdio.h>
#include <string.h>

void main(){
char str[100], temp;
scanf("%s", str);
int length= strlen(str);
for(int i=0; i<length/2; i++)
    {
        temp= str[i];
        str[i]= str[length-1-i];
        str[length-1-i]= temp;
    }
    printf("Reverse=%s", str);
}*/

// check String palindrome_____________________________________________________________________________________________________

/*#include <stdio.h>
#include <string.h>

void main(){
 char str[100];
 scanf("%s", str);
 int flag=1;

 for(int i=0; i<strlen(str)/2; i++){
    if(str[i] != str[strlen(str)-1-i]){
        flag=0;
        break;
    }
 }

 if(flag){
    printf("String is palindrome\n");

 }
 else{
    printf("String is not palindrome");
 }
}*/

//concatenate onr String at the end of another________________________________________________________________________________

/*#include <stdio.h>
#include <string.h>

int main(){
char str1[100], str2[100];
scanf("%s %s", str1, str2);
strcat(str1, str2);
printf("%s", str1);
return 0;
}
*/

// print String vertical________________________________________________________________________________________________

#include <stdio.h>
#include <string.h>

int main(){
char str[100];
 scanf("%s", str);
 for(int i=0; str[i]!='\0'; i++){
    printf("%c\n", str[i]);
 }
 return 0;
}
