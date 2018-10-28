/******************************************************************************
URL:: https://www.onlinegdb.com/online_c_compiler
Paste the code into and use the online compiler.

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// e^x = 1 + x/(1!) + (x^2)/(2!) + (x^3)/(3!) + ...
float exponentCalc(int iterations, int x)
{
    if (iterations <= 0)
    {
        return 0;
    } 
    else
    {
        float sum = 1;
        for (int i = 1; i < iterations; i++)
        {
            int top = x;
            for (int j = 1; j < i; j++) top *= x;
        
            int bottom = i;
            for (int j = i - 1; j > 0; j--) bottom *= j;
            
            sum += (float) top / (float) bottom;
        }
        
        return sum;
    }
}


int main()
{
    // test
    for (int i = 0; i < 7; i++)
    {
        printf("iterations = %d, x = 2, result = %f\n", i, exponentCalc(i, 2));
    }

    return 0;
}
