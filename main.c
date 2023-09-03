#include <stdio.h>
#include <sqlite3.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
    printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
}
    printf("\n");
    return 0;
}

int main(int argc, char **argv){
    sqlite3 *mediaLibrary;
    char *zErrMsg = 0;
    int rc;

    if( argc!=3 ){
        fprintf(stderr, "Usage: %s DATABASE SQL-STATEMENT\n", argv[0]);
        return(1);
    }

    rc = sqlite3_open(argv[1], &mediaLibrary);


    if( rc ){
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(mediaLibrary));
        sqlite3_close(mediaLibrary);
        return(1);
    }

    rc = sqlite3_exec(mediaLibrary, argv[2], callback, 0, &zErrMsg);


    if( rc!=SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }


    sqlite3_close(mediaLibrary);
    return 0;
}


int addSong(int a){



}

int playSong(){

    
}