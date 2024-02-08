#include <iostream>
#include <string> 
#include <string.h> 

using namespace std;

void c_style_tokenizer(string inp, char* delim) {
    
    const char* c_string = inp.c_str();

    // Tokenize the C string using the delimiter
    char* token = strtok((char*)c_string, delim);

    while (token) {
        cout << "Token:\n" << token;
        
        token = strtok(NULL, delim);
    }
}

int main() {
    
    string input = "This is my Programming Fundamentals lab";
    cout << "Input String: " << input << endl;
    c_style_tokenizer(input, (char*)" ");
    return 0;
}