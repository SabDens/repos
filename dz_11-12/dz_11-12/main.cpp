#include <iostream>

int main() {

    //1
    /*const int size = 9;
    int arr[size] = { 4, -3, 7, 1, -2, 8, 5, -6, 10 };
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {

        sum += arr[i];
    }
    int avg = sum / size;
    int sSize;
    if (avg > 0) 
    {
        sSize = (2 * size) / 3;
    }
    else 
    {
        sSize = size / 3;
    }
    bool isSwapped;
    for (int i = 0; i < sSize; i++)
    {
        isSwapped = false;
        for (int j = 0; j < sSize - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwapped = true;
            }
        }
        if (!isSwapped) break;
    }
    int start = sSize;
    int end = size - 1;
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;

        end--;
    }



    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;*/

    //2

    /*const int rows = 13; 
    const int cols = 14; 
    int arr[rows][cols];
    int counter = 1;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {

            arr[i][j] = counter;
            counter++;
        }
    }

    int sum = 0, count = 0;
    int minElem = arr[0][0], maxElem = arr[0][0];

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            int current = arr[i][j];  

            sum += current; 
            count++; 

            if (current < minElem) 
            {


                minElem = current;
            }
            if (current > maxElem) 
            {
                maxElem = current;
            }
        }
    }
    double avg = static_cast<double>(sum) / count;

    std::cout << "sum: " << sum << "\n";
    std::cout << "arithmetic mean: " << avg << "\n";

    std::cout << "Min Elem: " << minElem << "\n";
    std::cout << "Max Elem: " << maxElem << "\n";*/


    //3

    /*const int rows = 3;
    const int cols = 4;
    int arr[rows][cols] = {
        {3, 5, 6, 7},
        {12, 1, 1, 1},
        {0, 7, 12, 1}
    };

    int sumRow[rows] = { 0 }; 
    int sumCol[cols] = { 0 };
    int totalSum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sumRow[i] += arr[i][j];
            sumCol[j] += arr[i][j]; 
            totalSum += arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            std::cout << arr[i][j] << "\t";
        }
        std::cout << "| " << sumRow[i] << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    for (int j = 0; j < cols; j++) 
    {
        std::cout << sumCol[j] << "\t";
    }
    std::cout << "| " << totalSum << std::endl; */
        //я устал :(

    //4

    const int rows1 = 5,cols1 = 10;
    const int rows2 = 5,cols2 = 5;
    int arr1[rows1][cols1]{};
    int counter = 1;
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            arr1[i][j] = counter;
            counter++;
        }

    }
    for (int i = 0; i < 50; i++)
    {

    }
    int arr2[rows2][cols2];

    std::cout << "raa1:" << "\n";
    for (int i = 0; i < rows1; i++) 
    {

        for (int j = 0; j < cols1; j++) 
        {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {

            arr2[i][j] = arr1[i][2*j] + arr1[i][2*j + 1];
        }
    }

    std::cout << "\narr2 :" << "\n";
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {

            std::cout << arr2[i][j] << " ";
        }
        std::cout << "\n";
    }
    //пока я понял как это сделать и пока я это сделал я .... да ;(

    return 0;

}