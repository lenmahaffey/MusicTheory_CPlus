#pragma once
#include "Note.h"

// Constructors
Music::Note::Note(Music::ChromaticScale note) :
	Music::Object(note)
{
}

Music::Note::Note(int note) :
	Music::Object(note)
{
}

Music::Note::Note(char note) :
	Music::Object(note)
{
}

Music::Note::Note(std::string note) :
	Music::Object(note)
{

}