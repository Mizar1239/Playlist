#pragma once
#include <iostream>
#include <fstream>
#include <string>

typedef struct song* Song ;

void stampa(Song) ;

void salva(std::ofstream&, Song) ;

Song newSong(std::string, std::string) ;