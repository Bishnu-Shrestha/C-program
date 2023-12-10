#include <stdio.h>
#include <string.h>
#define max 6
struct library{
    char title[15];
    char author[20];
};
int main(){
    struct library book[max]={
        {"Doshi chasma","B.P. Koirala"},
        {"Paral Ko aago","Guru Prasad Mainali"},
        {"Ek Chihan","Hridayachandra Sing"},
        {"Sirish Ko Phool","Parijaat"},
        {"Jaye Bhundi","Bhairab Aryal"},
        {"Muna Madan","Laxmi Prasad Devkota"}
    }; 
    char name[20];
printf("\n_-_-_-_-_-_-_-_-LIBRARY_-_-_-_-_-_-_-_-\n\n\tEnter the name of book you want: ");

gets(name);
for (int i = 0; i < max; i++)
{
if (stricmp(name,book[i].title)==0)
{
 printf("The book %s written by %s is available.",book[i].title,book[i].author);
 return 0;
}
}
printf("The book %s is not available!!!!!!",name);

return 0;
}