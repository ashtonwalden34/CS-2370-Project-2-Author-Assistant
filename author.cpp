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
      case 'w':
         break;
      case 'f':
         break;
      case 'r':
         break;
      case 's':
         break;
      case 'q':
         break;
   }
}

int GetNumOfNonWSCharacters(string userInput) {

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