//hash.h
/*  Michael Alberda
 */

#ifndef HASH_H
#define HASH_H
#include <string>
struct nList     /*  table entry:  */
{
   string *word;          /*  defined name now word         */
   char *key;          /*  replacement text now key    */
   struct nList *next;  /*  next entry in chain  */
};

typedef struct nList *NListPtr;

unsigned Hash( char *s );
NListPtr Lookup( string *s );
NListPtr Insert( string *word, char *key );

void PrintHashTable();

#endif  /*  HASH_H  */
