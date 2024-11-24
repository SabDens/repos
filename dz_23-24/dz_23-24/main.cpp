#include <iostream>
#include <string>
#include <string.h>


void palindrome(char* str) {
    int len = strlen(str) - 1;
    bool yes_ro_no = true;

    for (int i = 0; i < len; i++, len--) {
        if (str[i] != str[len - 1]) {
            yes_ro_no = false;
            break;
        }
    }

    if (yes_ro_no) {
        std::cout << "Yes palindrome";
    }
    else {
        std::cout << "No palindrome";
    }
}
bool examination(char i) {
    if ((i == 'e') || (i == 'y') || (i == 'u') || (i == 'i') || (i == 'o') || (i == 'a'))
    {
        return true;
    }
    return false;
}
void vowel(char* str,int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {

        if (((str[i] == ' ') || (str[i] == '\n')) && i != 0) {

            if (examination(str[i - 1])) {
                count++;

            }
        }
        else if (((str[i] == '\n') || (str[i] == ' ')) && i == 0) {

            if (examination(str[i])) {
                count++;
            }
        }

    }
    std::cout << count;
}
void  delete_simbol(char* str,int size,int size_end) {
    for (int i = size; i < size_end; i++)
    {
        str[i] = str[i + 1];
        if (i == size-1)
        {
            break;
        }
    }
}
void delete_simbol_examination(char* str,char simbol,int size) {
    for (int i = 0; i < size; i++)
    {
        if (str[i] == simbol)
        {
            delete_simbol(str, i, size);
            i--;
        }
    }
}
void number(char* str,int size) {
    for (int i = 0; i < size; i++)
    {
        std::cout<< static_cast<int>(str[i])<< " ";
    }
}

int main() {

    //1
    /*
    std::cout << "max 20 characters" << "\n";
    char str[21];
    fgets(str, 21, stdin);
    palindrome(str);*/

    //2
    /*std::cout << "max 999 characters" << "\n";
    char str[1000];
    fgets(str, 1000, stdin);
    int size = strlen(str);
    vowel(str, size);*/

    //3
    /*std::cout << "max 999 characters" << "\n";
    char str[1000];
    fgets(str, 1000, stdin);
    char simbol;
    std::cin >> simbol;
    int size = strlen(str);
    delete_simbol_examination(str, simbol, size);
    fputs(str, stdout);*/
    
    //4
    std::cout << "max 999 characters" << "\n";
    char str[1000];
    fgets(str, 1000, stdin);
    int size = strlen(str);
    number(str, size);
    //5


    return 0;
}