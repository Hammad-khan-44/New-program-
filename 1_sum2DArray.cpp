#include<iostream>

int main()
{
    int r, c;
    std::cout << "Enter Rows and Columns: ";
    std::cin >> r >> c;

    int marks[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            std::cout << "Enter value at (" << i << ", " << j << "): ";
            std::cin >> marks[i][j];
        }
    }

    int total = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            total = total + marks[i][j];
        }
    }

    std::cout << "Sum of all elements: " << total << std::endl;

    return 0;
}
