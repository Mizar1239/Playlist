#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <ostream>
#include <string>
#include "song.h"
#include "playlist.h"

void lettura(Playlist) ;
void salvataggio(Playlist) ;
void inserisci(Playlist) ;

#define PLAYLIST "input.txt"
#define DIM 10
#define OK printf("OK\n")

int main(void)
{
	Playlist spotify = newPlaylist() ;

	lettura(spotify) ;

	std::string title, artist ;
	std::cout << "Inserisci il titolo della canzone: " ;
	getline(std::cin, title) ;
	std::cout << "Inserisci il nome dell'autore: " ;
	getline(std::cin, artist) ;
	Song brano = newSong(title, artist) ;

	spotify->addSong(brano) ;

	spotify->printList() ;

	salvataggio(spotify) ;

	return 0 ;
}

void lettura(Playlist lettore)
{
	std::ifstream linein ;

	linein.open(PLAYLIST) ;

	std::string title, artist ;
	Song c ;

	while (getline(linein, title))
	{
		getline(linein, artist) ;

		c = newSong(title, artist) ;

		lettore->addSong(c) ;
	}

	linein.close() ;
}

void salvataggio(Playlist lettore)
{
	std::ofstream outline ;

	outline.open(PLAYLIST) ;

	lettore->save(outline) ;

	outline.close() ;
} 