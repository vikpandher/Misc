/******************************************************************************
Vik Pandher
20181105
ReverseChunks Problem from T-Mobile.
*******************************************************************************/

#include <iostream>
#include <vector>

void reverseChunks(std::vector<int> & input, int chunkSize);

int main()
{
    // Sample input
    std::vector<int> input;
    for(int i = 1; i <= 9; i++)
        input.push_back(i);
        
    int chunkSize = 4;
    
    // reverseChunks
    reverseChunks(input, chunkSize);
    
    // Print Output
    for (int i = 0; i < input.size(); i++)
    {
        std::cout << input[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}

void reverseChunks(std::vector<int> & input, int chunkSize)
{
    int inputSize = input.size();
    
    int numberOfChunks = inputSize / chunkSize;
    
    int start = 0;
    for (int i = 0; i < numberOfChunks; i++)
    {
        for(int j = 0; j < chunkSize / 2; j++)
        {
            int temp = input[start + j];
            input[start + j] = input[start + chunkSize - 1 - j];
            input[start + chunkSize - 1 - j] = temp;
        }
        start += chunkSize;
    }
}
