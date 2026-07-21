#include<iostream>

int countEvenNumbers(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count = count + 1;
        }
    }
    return count;
}

int countOddNumbers(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int n;
    std::cout << "Enter Size of Array: ";
    std::cin >> n;

    int numbers[n];
    for(int i = 0; i < n; i++)
    {
        std::cout << "Enter value in index " << i << ": ";
        std::cin >> numbers[i];
    }

    int evenResult = countEvenNumbers(numbers, n);
    int oddResult = countOddNumbers(numbers, n);

    std::cout << "Number of Even Numbers in Array: " << evenResult << std::endl;
    std::cout << "Number of Odd Numbers in Array: " << oddResult << std::endl;

    return 0;
}
