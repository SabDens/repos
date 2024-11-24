#include <iostream>
#include "Matrix.h"
#include "Array.h"
#include <direct.h>
#include <climits>

using std::cout;
using std::endl;
#define _V1_
inline void ShowErrnoMessage()
{
    cout << "Error code: " << errno << endl;

    cout << "Message: ";
    switch (errno)
    {
    case EEXIST:
        cout << "Folder already exists.\n";
        break;
    case ENOENT:
        cout << "Path is incorrect.\n";
        break;
    default:
        break;
    }
}
void CreateFile()
{
    // ��������:    FILE* fopen(const char* filename, const char* mode)
    // ���������:   filename � ���� �� ����� ����� � ������ ����� �� �����������
    //              mode � ����� �������� �����
    // 
    // ������� ��������: �������� �� �������� ����. nullptr � ���� �� ������� �������/��������.
    // 
    // ��������: ��� ���� wchar_t ���� ������� _wfopen.
    // 
    // FILE � �� ���������, ��� ������ ���� ���� ���� � �������� �� ����.
    // 
    // �����:   ��������� Visual Studio �� ������������� �� �������� ���������������
    //          ������� fopen, �� ����� �� �����������. ³� ��������� ���������������
    //          �������� ������� fopen_s().

    // ������� ��������� / �������� ����� fopen_s:
    // 
    // ��������:    errno_t fopen_s(FILE** stream, const char* filename, const char* mode)
    // ���������:   stream � ������ �� �������� ���� File, �� ����� ���������� ����
    //              filename � ���� �� ����� ����� � ������ ����� �� �����������
    //              mode � ����� �������� �����
    // 
    // ������� ��������: 0 � ���� ������ �������, �������� EINVAL � ����� ��������.
    // 
    // ��������: ��� ���� wchar_t ���� ������� _wfopen_s.

    // ������ �������� �����:
    // "r" � ������� ���� ��� �������. ���� ����� �� ���� �� ���� ��������� ������, ����������� nullptr.
    // "w" � ������� ���� ��� ������. ���� ���� ����, �� ���� ���� �����������.
    // "a" � ������� ���� ��� ������ � �����. ������� ����, ���� ���� �� ����.
    // "r+" � ������� ���� ��� ������� � ��� ������. ���� ���� ����, �� ���� ���� �� �����������.
    // "w+" � ������� ���� ��� ������� � ��� ������. ���� ���� ����, �� ���� ���� �����������.
    // "a+" � ������� ���� ��� ������� � ��� ������ � �����. ������� ����, ���� �� �� ����.

    // ������ �������� ����� fopen:
    /*FILE* file1 = fopen("sdgsdgh.txt", "r");
    if (file1 == nullptr) {
        cout << "File could not be opened.\n";
    }*/

    // ������ �������� ����� fopen_s:
    FILE* file2;
    errno_t openingResult = fopen_s(&file2, "sdgsdgh.txt", "a");
    if (openingResult != 0) 
    {
        cout << "File could not been opened.\n";
        ShowErrnoMessage();
    }
}
void ReadFromFile()
{
    // int fgetc(FILE* stream)

    /*FILE* stream;
    fopen_s(&stream, "text.txt", "r");
    if (stream)
    {
        int symbol;
        do
        {
            symbol = fgetc(stream);
            std::cout << (char)symbol;
        } while (symbol != EOF);
        fclose(stream);
    }*/


    

    /*const int count = 30;
    char buffer[count];

    fgets(buffer, count, stdin);

    std::cout << buffer;*/

    FILE* stream;
    fopen_s(&stream, "test.txt", "rb");
    char buffer[30];
    if (stream)
    {
        size_t res = fread(buffer, sizeof(char), 30, stream);
        std::cout << "res = " << res << std::endl;
        buffer[res] = '\0';
        std::cout << buffer;
    }

}

void WriteIntoFile()
{
    // int fputc(FILE* stream)

    /*FILE* stream;
    fopen_s(&stream, "Characters.txt", "w");
    if (stream)
    {
        fputc('!', stream);
        fputc('@', stream);
        fputc('#', stream);
        fclose(stream);
    }*/


    /*FILE* stream;
    fopen_s(&stream, "Strings.txt", "w");
    if (stream)
    {
        fputs("My name is ", stream);
        fputs("Denys\n", stream);
        fputs("And I am trying to put some strings into file.", stream);
        fclose(stream);
    }*/

    // size_t fwrite(void* buffer, size_t size, size_t count, FILE* stream)

    FILE* stream;
    fopen_s(&stream, "Numbers.bin", "wb");
    if (stream)
    {
        const size_t SIZE = 4;
        int numbers[SIZE] = { 1, 2, 10, 20 };
        fwrite(&SIZE, sizeof(size_t), 1, stream);
        fwrite(numbers, sizeof(int), SIZE, stream);
        fclose(stream);
    }

    FILE* input;
    fopen_s(&input, "Numbers.bin", "rb");
    if (stream)
    {
        size_t SIZE;
        fread(&SIZE, sizeof(size_t), 1, stream);
        int* numbers = new int[SIZE];
        fread(numbers, sizeof(int), SIZE, stream);
        fclose(stream);
        for (size_t i = 0; i < SIZE; i++)
        {
            std::cout << numbers[i] << ' ';
        }
    }



}
void FilePositioning()
{
    // ������� � ����� � �������� �� ��������� ������ ��� ����������, �� �� ������
    // ��������� � ����. ���������, ���� �� ������������� ������� ��� ������� �� ������,
    // �� ���� ���������� �������� �� ������� ���������� ��� �������� ���.

    // ������� ��������, ���� ��� ����� ������ ��������������� ��� ���������, ���
    // ���� ��� ����� ���������� �� ��������� ����� �� ������.

    // ��� ������ � ����������� � ������� �������:
    //
    // 1. long ftell (FILE* stream)                       - ������� ������� ��������� ���������
    // 2. int fseek (FILE* stream, long offset, int origin) - ���������� ������� ��������� ���������
    //      origin: SEEK_CUR
    //              SEEK_END
    //              SEEK_SET
    // 3. int fgetpos (FILE* stream, fpos_t* pos)          - ������ ������� ����. ��������� � pos
    // 4. int fsetpos (FILE* stream, const fpos_t* pos)    - �������� ������� ��������� ��������� � pos
    // 5. void rewind (FILE* stream)                       - ����� ������� ��������� ��������� �� ������� �����

    // �������: � ���� � �������. ������ �� ����� "a" � ������� �� �� ����� "A"


    FILE* stream;
    fopen_s(&stream, "text.txt", "r");
    if (stream)
    {
        std::cout << ftell(stream) << std::endl;
        fseek(stream, -1, SEEK_END);
        std::cout << (char)fgetc(stream) << std::endl;
    }



}

void RenameFile()
{
    const char* oldName = "NewFolder/text.txt";
    const char* newName = "OldFolder/text.txt";

    int renamingResult = rename(oldName, newName);
    if (renamingResult != 0)
    {
        cout << "Error! File rename()\n";
    }
}
void CloseFile()
{
    const char* filename = "SomeFile.txt";
    FILE* file;
    fopen_s(&file, filename, "w");

    // -----------------
    // code...
    // -----------------

    if (file)
    {
        fclose(file);
    }
}


void DeleteFolder()
{
    const char* folderPath = "Empty";
    std::string removeCommand = "rmdir ";
    removeCommand += folderPath;

    // system("rmdir Empty");
    int removingResult = system(removeCommand.c_str());

    if (removingResult != 0)
    {
        cout << "Error! system(\"rmdir\")";
    }
}



void CreateFolder()
{
    const char* folderName1 = R"(MyFolder)";
    const wchar_t* folderName2 = L"��� �����";

    int creationResult;
    // make directory
    creationResult = _mkdir(folderName1);
    if (creationResult != 0)
    {
        cout << "Error! _mkdir()\n";
        //ShowErrnoMessage();
    }

    creationResult = _wmkdir(folderName2);
    if (creationResult != 0)
    {
        cout << "Error! _wmkdir()\n";
        //ShowErrnoMessage();
    }
}

//#define TEN 10
//#define MIN(X, Y) ((X) > TEN ? true : false)
//
//#define LESS(X, Y) ((X) < (Y) ? (X) : (Y))
//#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
//#define SPUARE(X) (X*X)
//#define EVEN(X) (X%2 ==0 ? true : false)
//#define DONT_EVEN(X) (X%2 !=0 ? true : false)
//int main() {
//    srand(time(0));
//    int X, Y;
//    std::cout << "X and Y\n";
//    std::cin >> X >> Y;
//    //std::cout << EVEN(X); 
//    //std::cout << DONT_EVEN(X);
//    //std::cout << SPUARE(X);
//    //std::cout << MIN(X, Y);
//    //std::cout << MAX(X, Y);
//    // 
//    // 
//    // 
//    //int var = VALUE;
//
//
//    /*size_t rows;
//    size_t cols;
//
//    std::cout << "Enter rows: ";
//    std::cin >> rows;
//    std::cout << "Enter cols: ";
//    std::cin >> cols;
//
//    Matrix matrix1 = Create(rows, cols);
//    Matrix matrix2 = Create(rows, cols);
//    Init(matrix1);
//    Init(matrix2);
//
//    std::cout << std::endl;
//    Print(matrix1);
//    std::cout << std::endl;
//    Print(matrix2);
//
//    Delete(matrix1);
//    Delete(matrix2);*/
//
//    return 0;
//}
//int main() {
//    //CreateFolder();
//    //DeleteFolder();
//    //RenameFolder();
//    //ShowErrnoMessage();
//
//    
//    //CreateFile();
//    //ReadFromFile();
//    //CloseFile();
//    FilePositioning();
//    //WriteIntoFile();
//    return 0;
//}

inline bool isCharacter(char character)
{
    return character != ' ' && character != ',' && character != '.' && character != '!' && character != '?';
}


int main() {

    FILE* input;
    FILE* output;
    fopen_s(&input, "input.txt", "r");
    fopen_s(&output, "output.txt", "w");
    if (input && output)
    {
#ifdef _V1_
        fseek(input, 0, SEEK_END);
        size_t fileSize = ftell(input);
        rewind(input);
        if (fileSize)
        {
            char* buffer = new char[fileSize];
            fread(buffer, sizeof(char), fileSize, input);
            int count = 0;
            int wordsCursor = 0;
            size_t wordsBufferSize = fileSize; // / 7
            char* wordsBuffer = new char[wordsBufferSize];
            for (int i = 0; i < fileSize; i++)
            {
                if (isCharacter(buffer[i]))
                {
                    count++;
                }
                else
                {
                    if (count >= 7)
                    {
                        for (int j = 0; j < count; j++)
                        {
                            wordsBuffer[wordsCursor++] = buffer[i - count + j];
                        }
                        wordsBuffer[wordsCursor++] = '\n';
                    }
                    count = 0;
                }

            }
            fwrite(wordsBuffer, sizeof(char), wordsCursor, output);
        }



#else
        int count=0;
        int character;
        const size_t bufferSize = 100;
        char buffer[bufferSize];
        while ((character = fgetc(input)) != EOF)
        {
            if (isCharacter(character))
            {
                count++;
                
            }
            else
            {
                if (count>=7)
                {

                    fseek(input, -(count + 1), SEEK_CUR);
                    if (count > bufferSize-1)
                    {
                        char* bigBuffer = new char[count];
                        fread(bigBuffer, sizeof(char), count, input);
                        bigBuffer[count] = '\n';
                        fwrite(bigBuffer, sizeof(char), count+1, output);
                    }
                    else
                    {
                        fread(buffer, sizeof(char), count, input);
                        buffer[count] = '\n';
                        fwrite(buffer, sizeof(char), count +1, output);
                    }

                    
                }
                count = 0;
            }

            //fputc(character,stdout);
        }
#endif // _V1_



        

        fclose(input);
        fclose(output);
    }
}


