#include <iostream>
#include <string>
#include <cstdlib>
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
    
    // outputting the unsorted array
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    Print("\n");

    // sorting an array
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // asscending order
            if (array[j]<array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            
        }
        
    }
    
    // display the sorted array
    Print("Sorted");
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    

    return 0;  
}