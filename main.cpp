#include <iostream>
#include <string>
#include <algorithm>

#define MAX 100

// this prints text
void Print(std::string phrase)
{
    std::cout << phrase << std::endl;
}



int main() //main function
{
    int n;
    int array[MAX];
    Print("Enter max array limit: ");
    std::cin >> n;

    // inputting values in an array
    for (int i = 0; i < n; i++)
    {
        array[i] = rand();
    }
    Print("Unsorted");
    // outputting the unsorted array
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    Print("\n");

    std::sort(array, array+n);
    // display the sorted array
    Print("Sorted");
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;  
}