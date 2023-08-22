#include <id3/tag.h>

typedef struct mediaLibrary{



} mediaLibrary;


//data structures for main library

typedef struct songData{
    char* title;
    char* artist;
    char* albumArtist;
    char* album;
    char* date;
    char* genre;
    int trackNum;

    char* folderPath;

    albumGroup* parentAlbum;

} songData;


typedef struct albumGroup{
    songData** songList;
    char* coverArtPath;
    artistGroup* parentArtist;
} albumGroup;


typedef struct artistGroup{
    albumGroup** albums;
    char* artistPicturePath;
}

//playlist data structures

typdef struct playList{
    char * playlistName;
    songData** playlistEntries;

}


songData* createSongData(FILE *p, char * fileName){

    ID3_TAG myTag(fileName);




}