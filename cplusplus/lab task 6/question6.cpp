#include <iostream>
#include <fstream>
#include <string>
#include <cctype>   // For toupper

using namespace std;

// Function to count the number of vowels in a string
int countVowels(const string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        char lowercaseCh = tolower(ch);
        if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

// Function to count the number of words in a string
int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return wordCount;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string result;
    bool capitalizeNext = true;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (capitalizeNext) {
                result += toupper(ch);
                capitalizeNext = false;
            } else {
                result += ch;
            }
        } else {
            result += ch;
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("module_statement.txt");
    if (!inputFile) {
        cout << "Error opening the file. Make sure 'module_statement.txt' exists." << endl;
        return 1;
    }

    string fileData;
    getline(inputFile, fileData);

    cout << "Statement from the file: " << fileData << endl;
    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed statement: " << reverseString(fileData) << endl;
    cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << endl;

    inputFile.close();
    return 0;
}
