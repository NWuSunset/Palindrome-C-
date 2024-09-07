#include <iostream>
#include <string.h>
#include <cstring>


using namespace std;

//Functions have to be declared before main
//remove an element (rem) from a char array
int removeElement(char arr[], int len, char rem) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == rem) { //if the element to remove is found
      len = len - 1; //make the length of the array shorter
        for (int j = i; j < len; j++) { //move all the elements right till the end of the new length
          arr[j] = arr[j + i];
        }
    }
  }
  return len;
}


int main() {
  //this gonna palindrome time
  char str[81]; //need 81 to account for a null character?
  char str2[81];
  cin.get(str, 81);
  cin.get();
  //send error if more than 80

  int strLength = strlen(str) - 1; //subtract one for the null character
  int arrLen = sizeof(str) / sizeof(str[0]); 

  //Remove all non-letters 
  for (int i = 0; i < arrLen; i++) {
    if (ispunct(str[i]) || isspace(str[i])) {
      arrLen = removeElement(str, arrLen, str[i]); 
     }
  }

  /* int strLength = strlen(str) - 1; //subtract one for the null character  
  //Then reverse the array
  for (int i = 0; i < strlen(str); i++) {
    str2[i] = str[strLength - i]; //go backwards through str and put that into str2 
    } */

  //cout << str << endl;
  for (int i = 0; i < arrLen; i++)
    cout << str[i] << " "; //printing out some weird stuff right now. (probably the null char or something)
  
  return 0;
}

