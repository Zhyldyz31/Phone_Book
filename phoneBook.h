//Zhyldyz Zhumabekoba
//Neptun code:G9PZT9

#ifndef PHONE_H
#define PHONE_H

#include <stdbool.h>

struct Entry {
 char name[30];
 char phoneNumber[30];
};
typedef struct Entry  Entry;

struct PhoneBook {
  Entry* entriesArr; 
  int numEntries;
  int size;
};
typedef struct PhoneBook PhoneBook;

void init(PhoneBook* phoneBook, int size); 
bool insert(PhoneBook* phoneBook, char* name , char* phoneNum);
char* get(PhoneBook* phoneBook , char* name);
void print(PhoneBook* phoneBook);
void dump (PhoneBook* phoneBook, char* filename);
void destroy(PhoneBook* phoneBook);

#endif