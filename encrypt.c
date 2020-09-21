#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while (*ptr!= '\0')
    {
        *ptr = *ptr + 1; // use pointer and +1 for encrypt and -1 for decrypt
        ptr++;
    }
    
}
 
int main() {
    
    char c[] = "Hello"; //Enter the string you want to encrypt

    encrypt(c);

    printf("The encrepted string is:%s",c);

    return 0;
}
