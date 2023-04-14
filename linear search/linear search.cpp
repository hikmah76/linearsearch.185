#include <iostream>
using namespace std;


int arr[20]; //Array to be searched
int n; // Number of elements in the array
int i; //Index of array element


void input()
{
    while (true)
    {
        cout << "Enter the number of element in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    // Accep array elements 
    cout << "\n----------------\n";
    cout << "Enter Array elements \n";
    cout << "-------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}



void Linearsearch()
{
    char ch;
    int comparison; // Number of comparions 

    do
    {
        // Accept the number to be searched 
        cout << "\nEnter the element you want to search: "; //langkah 1
        int item;
        cin >> item;


        comparison = 0;
        for (i = 0; 1 < n; i++) // langkah2,3 dan 4
        {
            comparison++;
            if (arr[i] == item) // langkah 5 a found
            {
                cout << "\n" << item << " found at pasition " << (i + 1) << endl;
                break;
            }
        }

        if (i == n)
            cout << "\n" << item << "not foud in the array\n";
        cout << "\nNumbeer of comparisons: " << comparison << endl;

        cout << "\ncontinue  search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'y'));
}

int main()
{
    input();
    Linearsearch();

    return 0;
};



