#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string word;
    int count = 0;

    // Input the text and word to search for
    cout << "Enter a line of text: ";
    getline(std::cin, text);

    cout << "Enter the word to count: ";
    cin >> word;

    // Search for the word and count its occurrences
    size_t pos = 0;
    while ((pos = text.find(word, pos)) != std::string::npos) {
        count++;
        pos += word.length();
    }

    // Display the count
    cout << "The word \"" << word << "\" occurs " << count << " times in the given text." << std::endl;

    return 0;
}
