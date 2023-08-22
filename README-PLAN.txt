#rust learning project
#no music player on linux properly replicates my windows foobar2k setup, so im going to make my own

#goal is to replicate elements of columns ui while keepin things relatively minimal and having a slightly easier to manage library - playlist division than foobar

*Music Library that is relatively unchangeable and is navigated with a filter select columb for artist / album artist
*Selecting artist creates a full list of albums 
*Music library "playlist" is not editable without changing the metadata of the files
*Meanwhile Playlists can be rearranged (also use format that can interface with plex??)
*Waveform seekbar with volume 
    *computed asynchronously from window resizing
*album art shown in playlist panel
    *cover flow style possible?

Libraries:
https://github.com/mpv-player/mpv/blob/master/DOCS/man/libmpv.rst
https://id3lib.sourceforge.net/

just make an mpv player



Systems:

Backend
Playlist
    ->Media Library

OS Streams: SDL + Pipewire

Audio Decode: ffmpeg

Interface (QT?):

*Waveform seekbar/volume
*hiding button frame
*Playlist Viewer
    *special viewer for Library
*artist filter


