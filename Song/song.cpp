#include <iostream>
#include <string>
#include "song.h"

struct song
{
	std::string title ;
	std::string artist ;

	song(std::string titolo, std::string artista) ;

	std::string titolo(void) ;

	std::string artista(void) ;

	void print(void) ;
} ;

song::song(std::string titolo, std::string artista)
	: 	title(titolo), artist(artista)	
	{}

std::string song::titolo(void)
{
	return title ;
}

std::string song::artista(void)
{
	return artist ;
}

void song::print(void)
{
	std::cout 	<< "\nTitolo: " 
				<< title 
				<< "\nArtista: " 
				<< artist 
				<< std::endl ;
}

Song newSong(std::string title, std::string artist)
{
	return new song(title, artist) ;
}

void stampa(Song brano)
{
	brano->print() ;
}

void salva(std::ofstream& file, Song brano)
{
	file << brano->title << std::endl ;
	file << brano->artist << std::endl ;
}