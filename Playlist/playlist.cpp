#include <iostream>
#include <fstream>
#include <cstdlib>
#include "playlist.h"

node::node(void)
	: canzone(NULL), next(NULL)
{}

list::list(void)
	: head(NULL), size(0)
{
	printf("Lista creata\n") ;
}

void list::addSong(Song brano)
{
	Node p = new node() ;
	p->canzone = brano ;

	p->next = head ;
	size++ ;
	head = p ;
}

void list::printList(void)
{
	Node p ; 

	for (p=head ; p!=NULL ; p=p->next)
		stampa(p->canzone) ;
}

Playlist newPlaylist(void)
{
	return new list() ;
}

void list::save(std::ofstream& file)
{
	Node p ;

	printf("Salvataggio\n") ;

	for (p=head ; p!=NULL ; p=p->next)
		salva(file, p->canzone) ;
}