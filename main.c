//Zhyldyz Zhumabekoba
//Neptun code:G9PZT9

#include <stdio.h>
#include "phoneBook.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i;
  PhoneBook pb1;
  init(&pb1,12);
  insert(&pb1, "Zhyldyz", "123");
  insert(&pb1, "Aina", "1234");
  insert(&pb1, "Eldar", "1769");
  char* phn;
  phn = get(&pb1 ,"Aia");

  if(phn==NULL) {
    printf("Name was not found\n");
  }
  else  
    printf("The number of person you entered is: %s\n",phn);
  
  print(&pb1);
  
  dump(&pb1,"file.txt");

  destroy(&pb1);
  printf("Byeee");

  return 1;
}










