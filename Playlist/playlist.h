#pragma once
#include "song.h"

typedef struct list* Playlist ;

typedef struct node* Node ;

struct node
{
	Song canzone ;
	Node next ;

	node() ;
} ;

struct list
{
	Node head ;
	int size ;

	list(void) ;

	void printList(void) ;

	void addSong(Song) ;

	void save(std::ofstream&) ;
} ;

Playlist newPlaylist(void) ;

