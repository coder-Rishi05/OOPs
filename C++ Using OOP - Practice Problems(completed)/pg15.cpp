/*15. Write a C++ program to create a class called "MusicLibrary" with a collection of songs and methods to add and remove songs, and to play a random song.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SONGS = 50;

class MusicLibrary {
private:
    string songs[MAX_SONGS];
    int numSongs;

public:
    MusicLibrary() : numSongs(0) {}

    void addSong(const string& song) {
        if (numSongs < MAX_SONGS) {
            songs[numSongs++] = song;
            cout << "Song \"" << song << "\" added to the library." << endl;
        } else {
            cout << "Music library is full. Cannot add more songs." << endl;
        }
    }

    void removeSong(const string& song) {
        int index = -1;
        for (int i = 0; i < numSongs; ++i) {
            if (songs[i] == song) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < numSongs - 1; ++i) {
                songs[i] = songs[i + 1];
            }
            numSongs--;
            cout << "Song \"" << song << "\" removed from the library." << endl;
        } else {
            cout << "Song \"" << song << "\" not found in the library." << endl;
        }
    }

    void playRandomSong() {
        if (numSongs == 0) {
            cout << "No songs in the library. Please add songs first." << endl;
            return;
        }

        srand(time(nullptr));
        int randomIndex = rand() % numSongs;
        cout << "Playing random song: " << songs[randomIndex] << endl;
    }
};

int main() {
    MusicLibrary library;

    library.addSong("Song 1");
    library.addSong("Song 2");
    library.addSong("Song 3");

    library.removeSong("Song 2");

    library.playRandomSong();

    return 0;
}
/* Output : 

Song "Song 1" added to the library.
Song "Song 2" added to the library.
Song "Song 3" added to the library.
Song "Song 2" removed from the library.
Playing random song: Song 3

*/