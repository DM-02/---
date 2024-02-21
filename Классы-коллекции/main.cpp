//
//  main.cpp
//  Классы-коллекции
//
//  Created by Дмитрий Сергеевич on 21.02.2024.
//

#include <iostream>
#include <cstring>

class String {
private:
    const static int MAX_LENGTH = 80;
    char* str;
    
public:
    String() {
        str = new char[MAX_LENGTH + 1];
        str[0] = '\0';
    }
    
    String(int length) {
        str = new char[length + 1];
        str[0] = '\0';
    }
    
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    
    void inputString() {
        std::cout << "Enter a string: ";
        std::cin.getline(str, MAX_LENGTH);
    }
    
    void displayString() {
        std::cout << "String: " << str << std::endl;
    }
    
    ~String() {
        delete[] str;
    }
};

int main() {
    String defaultString;
    String customLengthString(50);
    
    String userInputString;
    userInputString.inputString();
    
    defaultString.displayString();
    customLengthString.displayString();
    userInputString.displayString();
    
    return 0;
}

