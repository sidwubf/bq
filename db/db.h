#ifndef _DB_H
#define _DB_H

typedef void * DBHANDLE;

DBHANDLE db_open(const char *pathname, int oflag, ...);
void db_close(DBHANDLE db);
int db_store(DBHANDLE db, const char *key, const char *data, int flag);
char *db_fetch(DBHANDLE db, const char *key);
int db_delete(DBHANDLE db, const char *key);
void db_rewind(DBHANDLE db);
char *db_nextrec(DBHANDLE db, char *key);

#define DB_INSERT 1
#define DB_REPLACE 2
#define DB_STORE 3

#define IDXLEN_MIN 6
#define IDXLEN_MAX 1024
#define DATLEN_MIN 2
#define DATLEN_MAX 1024

#endif
