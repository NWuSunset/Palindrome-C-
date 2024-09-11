/*
  A program that check if a input is a palindrome (excluding spaces and punctuation)
  Nathaniel Wu
  9/11/2024
 */

#include <iostream>
#include <string.h>
#include <cstring>


using namespace std;

//Functions have to be declared before main

int main() {
  char str[81]; //need 81 to account for a null character?
  char str2[81];
  cin.get(str, 81);
  cin.get(); //need another cin.get() to stop it from reading the retrun

  int strLength = strlen(str);
  int count = 0;
  bool palindrome = false;

  //remove all punctuation from the cstring
  for (int i = 0; i < strLength; i++) {
    if (!ispunct(str[i]) && !isspace(str[i])) {
      str2[count] = tolower(str[i]); //change it to lowercase (in case it is uppercase)
      count++; //if we assign a letter to this space move up
    }
  }
  str2[count] = '\0'; //assign null character to the end of str2 to end the string/cstring
  
  //check palindrome.  
  for (int i = 0; i <= strlen(str2)/2; i++) { //only need to loop through half the string (since we check each side with each other)
    if (str2[i] == str2[strlen(str2) - i - 1]) {//if a letter has an equal to the opposite side(subtract one since i starts at zero) 
      palindrome = true; //if we stay true then we keep looping
    } else {
      palindrome = false;
      i = 1000; //gets out of the loop if false
    }
  }

  if (palindrome) {
    cout << "Is a palindrome" << endl;
  } else {
    cout << "Is not a palindrome" << endl;
  }
  return 0;
}

