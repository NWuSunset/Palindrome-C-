#include <iostream>
#include <string.h>
#include <cstring>


using namespace std;

int main() {
  //this gonna palindrome time
  char str[81]; //need 81 to account for a null character?
  char str2[81];
  cin.get(str, 81);
  cin.get();
  //send error if more than 80

  int strLength = strlen(str) - 1; //subtract one for the null character

  //Remove all non-letters 
  for (int i = 0; i < 81; i++) {
    if (ispunct(str[i]) || isspace(str[i])) {
      str[i] = str[i + 1]; //copy the next letter to this onemv  
     }
  }

  //int strLength = strlen(str) - 1; //subtract one for the null character  
  //Then reverse the array
  for (int i = 0; i < strlen(str); i++) {
    str2[i] = str[strLength - i]; //go backwards through str and put that into str2 
  }

  cout << str << endl;
  


  
  return 0;
}
