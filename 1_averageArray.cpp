#include<iostream>

double calculateAverage(int arr[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total = total + arr[i];
    }
    double average = (double)total / size;
    double roundedAverage = (double)((long long)(average * 100 + 0.5)) / 100;
    return roundedAverage;
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

    double average = calculateAverage(scores, n);
    std::cout << "Average Score: " << average << std::endl;

    return 0;
}
