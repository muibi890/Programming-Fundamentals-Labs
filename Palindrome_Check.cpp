
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPalindrome(char input[]);

int main()
{
    ofstream fin;
    fin.open("palindrome.txt");
    fin << "thisiht";
    fin.close();
    fin.open("palindrome.txt", ios::in); 
    if (fin.is_open()) {   
        char tp();
        while (getline(fin, tp())) { //read data from file object and put it into string.
            cout << isPalindrome(tp) << "\n"; //print the data of the string
        }
        fin.close(); 
    }
    return 0;

}
   


 

bool isPalindrome(char input[])
{
    {
        char string1[20];
        int i, length;
        int flag = 0;

        cout << "Enter a string: "; cin >> string1;

        length = strlen(string1);

        for (i = 0;i < length;i++) {
            if (string1[i] != string1[length - i - 1]) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            cout << string1 << " is not a palindrome" << endl;
        }
        else {
            cout << string1 << " is a palindrome" << endl;
        }
        system("pause");
        

    }

    return false;
}
