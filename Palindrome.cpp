#include <iostream>
#include <string.h>
#include <cstring>


using namespace std;

//Functions have to be declared before main
//remove an element (rem) from a char array
int removeElement(char arr[], int len, char rem) {
  int i;
  for (i = 0; i < len; i++) {
    if (arr[i] == rem)  //if the element to remove is found
      break;

    if (i < len) {
      len = len - 1; //make the length of the array shorter
        for (int j = i; j < len; j++) { //move all the elements right till the end of the new length
	  arr[j] = arr[j + 1];
        }
  }
  }
  return len;
} arrLen = removeElement(str, arrLen, str[remChar]);

int main() {
  //this gonna palindrome time
  char str[81]; //need 81 to account for a null character?
  char str2[81];
  cin.get(str, 81);
  cin.get();
  //send error if more than 80

  int strLength = strlen(str);
  int arrLen = sizeof(str) / sizeof(str[0]); 
  
  int remCount = 0; //Needed for reversing as whenever an element is removed it adds an extra blank characters
  //Remove all non-letters

  int remChar = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (ispunct(str[i]) || isspace(str[i])) {
       arrLen = removeElement(str, arrLen, str[i]);
       //remChar = i;
       //remCount++;
     }
  }
  if (remCount > 0) {
    //    arrLen = removeElement(str, arrLen, str[remChar]);
  }
  cout << str << endl;
  cout << remCount << endl;
  int n = strLength - 1;
  //Then reverse the array
  for (int i = 0; i < strLength; i++) { //go through length of string
    cout << str[n] << endl;
    str2[i] = str[n]; //assign the values of the string in backwards.
    n--;
    }

  cout << str << endl;
  cout << str2 << endl;
  return 0;
}

