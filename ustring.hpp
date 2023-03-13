#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cctype>

class uStringClass {public: std::string Lower(std::string entry_str); std::string Upper(std::string entry_str); bool IsLegal(std::string entry_str, char illegal);};

std::string uStringClass::Lower(std::string entry_str) {
    const int entry_str_length = entry_str.length();
    char arr[entry_str_length + 1];
    strcpy(arr, entry_str.c_str());
    for (int i = 0; i < entry_str_length + 1; i++) {
        arr[i] = tolower(arr[i]);
    }
    std::string output_string = arr;
    return output_string;
}

std::string uStringClass::Upper(std::string entry_str) {
    const int entry_str_length = entry_str.length();
    char arr[entry_str_length + 1];
    strcpy(arr, entry_str.c_str());
    for (int i = 0; i < entry_str_length + 1; i++) {
        arr[i] = toupper(arr[i]);
    }
    std::string output_string = arr;
    return output_string;
}

uStringClass uString;