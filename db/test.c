#include <comm.h>
#include <db.h>
#include <fcntl.h>

int
main()
{
    DBHANDLE db;

    if ((db = db_open("db4", O_RDWR | O_CREAT | O_TRUNC, FILE_MODE)) == NULL)
        err_sys("db_open error");

    if (db_store(db, "wbf", "data1", DB_INSERT) != 0)
        err_quit("db_store for wbf");

    if (db_store(db, "wbf2", "data for wbf2", DB_INSERT) != 0)
        err_quit("db_store for wbf2");

    if (db_store(db, "wbf3", "data for wbf3", DB_INSERT) != 0)
        err_quit("db_store for wbf3");

    db_close(db);
    return 0;
}



















