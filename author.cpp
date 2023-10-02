#include <iostream>
#include <string>
using namespace std;

/* Define your functions here. */
void PrintMenu() {
   cout << "MENU" << endl;
   cout << "c - Number of non-whitespace characters" << endl;
   cout << "w - Number of words" << endl;
   cout << "f - Find text" << endl;
   cout << "r - Replace all !'s" << endl;
   cout << "s - Shorten spaces" << endl;
   cout << "q - Quit" << endl << endl;
   cout << "Choose an option:" << endl;
}

void ExecuteMenu (string userInput, char menuSelection) {
   cout << userInput << endl << menuSelection << endl;

   switch(menuSelection) {
      case 'c':
         GetNumOfNonWSCharacters(userInput);
         break;
      case 'w':
         GetNumOfWords(userInput);
         break;
      case 'f':
         // cin.ignore() then prompt for new text
         // FindText(userInput, searchText);
         break;
      case 'r':
         ReplaceExclamation(userInput);
         break;
      case 's':
         ShortenSpace(userInput);
         break;
      case 'q':
         break;
   }
}

void GetNumOfNonWSCharacters(string userInput) {

}

void GetNumOfWords(string userInput) {
   
}

void FindText(string userInput, string searchText) {

}

void ReplaceExclamation(string userInput) {

}

void ShortenSpace(string userInput) {

}


int main() {
   string userInput;

   cout << "Enter a sample text:" << endl << endl;
   // gets user input and includes white spaces
   getline(std::cin, userInput);

   cout << "You entered: " << userInput << endl << endl;

   char menuSelection;
   cin >> menuSelection;

   return 0;
}