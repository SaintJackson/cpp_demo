/* CapSenFirstWord.cpp
 * Convert every first word of each string input sentence to uppercase.
 * @ source www.mcculloughdesigns.com
 **/

#include <iostream>
#include <string>
using namespace std;

bool isSentenceFinish(char);
void lowerCase(string&);
void capFirstWord(string&);
const string NOSTR = "0";


int main() {
    string sentence;
    cout << "Enter a String: " + sentence << endl;
    getline(cin, sentence);

    while (sentence != NOSTR) {
        capFirstWord(sentence);
        cout << sentence << endl;

        cout << "enter new string sentence: ";
        getline(cin, sentence);
    }
    return 0;
}

void capFirstWord(string& sentence) {
    lowerCase(sentence); // lowercase all characters of the string sentence frist.
    bool isCap;
    for (int i = 0; i < sentence.length(); i++) {
        if (isSentenceFinish(sentence[i])) {
            isCap = false;
        }
        if (isCap == false && isalpha(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
            isCap = true;
        }
    }
}

/**
 * Convert all characters to lower cases.
 * Method: tolower() inherited from String class
 */
void lowerCase(string& sentence) {
    // convert all characters of input String sentence to lower cases
    for (int i = 0; i < sentence.length(); i++) {
        sentence[i] = tolower(sentence[i]);
    }
}

bool isSentenceFinish(char character) {
    switch(character)
    {
        case '.':
        case '?':
        case '!':
        case '~':
            return true;
        default:
            return false;
    }
}
