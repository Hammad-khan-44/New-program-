#include<iostream>

int calculate2Low(int arr[], int size)
{
    int lowest = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }

    int secondLowest = lowest;
    bool found = false;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != lowest)
        {
            if(found == false || arr[i] < secondLowest)
            {
                secondLowest = arr[i];
                found = true;
            }
        }
    }

    return secondLowest;
}

int calculate2High(int arr[], int size)
{
    int highest = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > highest)
        {
            highest = arr[i];
        }
    }

    int secondHighest = highest;
    bool found = false;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != highest)
        {
            if(found == false || arr[i] > secondHighest)
            {
                secondHighest = arr[i];
                found = true;
            }
        }
    }

    return secondHighest;
}

int main()
{
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;

    int scores[n];
    for(int i = 0; i < n; i++)
    {
        std::cout << "Enter score " << i + 1 << ": ";
        std::cin >> scores[i];
    }

    int secondLow = calculate2Low(scores, n);
    int secondHigh = calculate2High(scores, n);

    std::cout << "2nd Lowest Score: " << secondLow << std::endl;
    std::cout << "2nd Highest Score: " << secondHigh << std::endl;

    return 0;
}
