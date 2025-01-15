#include <iostream>


int examination1(char elem) {
    switch (elem) {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case '0':
        return 0;
    default:
        throw std::invalid_argument("Error");
    }
}
int from_char_to_int(char* a) {
    int summ = 0;
    size_t length = strlen(a);
    for (size_t i = 0; i < length; i++)
    {

        summ+= examination1(a[i]);
    }
    return summ;
}

int main() {
	/*FILE* stream;
	fopen_s(&stream);*/
	//std::exception ex("Error");
	/*throw ex;
    try
    {
        Func1();
        Func2();
    }
    catch (const B& ex)
    {
    }*/
   
    try
    {
        char* a = new char[10] {"12312a299"};
        std::cout << from_char_to_int(a)<<"\n";
    }
    catch (const std::invalid_argument& ex)
    {
        std::cout << "Error letter" << "\n";

    }

}