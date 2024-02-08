#include <iostream>
#include <cstring>

using namespace std;

void rotateLeft(char str[]);
void sort2DAlphabetically(char arr[][50], int rows);

char st[50];
char ar[50][50];

int main()
{
    int strLength = 0;

    cout << "Enter the string: ";
    cin >> st;

    for (int i = 0; st[i] != '\0'; i++)
    {
        strLength++;
    }

    // Rotate and store rotated strings in the 2D array
    for (int i = 0; i <= strLength; i++)
    {
        rotateLeft(st);
        strcpy(ar[i], st);
    }

    // Call the function to sort the 2D array alphabetically
    sort2DAlphabetically(ar, strLength + 1);

    // Print the sorted 2D array
    cout << "Sorted 2D Array:" << endl;
    for (int i = 0; i <= strLength; i++)
    {
        cout << ar[i] << endl;
    }

    system("pause");
    return 0;
}

void rotateLeft(char str[])
{
    int val = strlen(str);

    char temp = str[0];
    for (int i = 0; i < val - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[val - 1] = temp;
}

void sort2DAlphabetically(char arr[][50], int rows)
{

    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                char temp[50];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
