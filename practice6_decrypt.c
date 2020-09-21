#include<stdio.h>
void decrept(char *c){
    char *ptr = c;
    while (*ptr!= '\0')
    {
        *ptr = *ptr -1; // use pointer and +1 for encrept and -1 for decrept
        ptr++;
    }
    
}
 
int main() {
    
    char c[] = "Ifmmp"; // Enter the encripted text generated from encript.c

    decrept(c);

    printf("The decrepted string is:%s",c);

    return 0;
}