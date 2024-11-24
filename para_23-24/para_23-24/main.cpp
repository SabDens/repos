#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>

int main() {
    //const char* str = "hello world!";
    //const int size = 5;
    //int str[size] = { 'a', 'a', 'a', 'a', '\0' };

   // char str[15];
   ///* gets(str);           
   // puts(str);  */      
   // fgets(str, 15, stdin); 
   // fputs(str, stdout);  


    char str[15] = "Hello world";
    std::cout << sizeof(str);


    /*char str[15] = "Hello world";
    std::cout << strcpy(str);*/

    //char str[] = "Hello ";
    //char name[] = "John";
    ////str = name;
    //std::cout << strcpy(name, str);



    /*char str[] = "Hello 12323123";
    char name[] = "John";
    std::cout << strncat_s(str, name, 4);*/


    //char str[] = "Hello ";
    ////char name[] = "John";
    //char* symb = strrchr(str, 'l');
    //std::cout << symb;
    //std::cout << std::endl << str;


    /*char str[] = "Hello";
    char name[] = "hello";
    std::cout << strcmp(str, name);
    std::cout << std::endl << str;*/

    /*char str[] = "Hello";
    char name[] = "hello";
    std::cout << _stricmp(str, name);
    std::cout << std::endl << str;*/

    

    //char str[] = "Hello World";
    ////char name[] = "hello C++";
    //std::cout << _strnset_s(str, 'o', 5);
    //std::cout << std::endl << str;
    return 0;
}
