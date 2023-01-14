#include <stdio.h>
#include "phoneBook.h"
#include <stdlib.h>
#include <string.h>

void  init(PhoneBook* phoneBook, int size) {
  phoneBook->numEntries=size;
  phoneBook->size=0;
  phoneBook->entriesArr=(Entry*)malloc(sizeof(Entry) * (phoneBook->numEntries));  
  
}

bool  insert(PhoneBook* phoneBook, char* name , char* phoneNum){
   
   Entry data;
   if(phoneBook->size==phoneBook->numEntries){
    return false;
   }
   strcpy(data.name, name);
   strcpy(data.phoneNumber,phoneNum);
   phoneBook->entriesArr[phoneBook->size]=data;
   phoneBook->size=(phoneBook->size)+1;
   return true;
}

char* get(PhoneBook* phoneBook , char* name) {
  int i;
  for (i=0; i<phoneBook->numEntries ; i++) {
    if (strcmp(phoneBook->entriesArr[i].name,name)==0) return phoneBook->entriesArr[i].phoneNumber;
    else continue;
  }
  return NULL;
 
}
void print(PhoneBook* phoneBook) {
  int i;
  for (i=0; i<phoneBook->size ; i++) {
    printf("Name: %s , phone number: %s\n" , phoneBook->entriesArr[i].name , phoneBook->entriesArr[i].phoneNumber);
  }
}

void dump (PhoneBook* phoneBook, char* filename) {
  FILE* file=fopen(filename, "w");
  size_t i;
  for(i=0; i<phoneBook->size ; i++) {
    fprintf(file,"%s - %s\n",phoneBook->entriesArr[i].name , phoneBook->entriesArr[i].phoneNumber);
  }
  fclose(file);
}

void destroy(PhoneBook* phoneBook) {
  free(phoneBook->entriesArr);
 
}