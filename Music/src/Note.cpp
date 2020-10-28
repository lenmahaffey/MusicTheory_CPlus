#pragma once
#include "Note.h"

// Constructors
Music::Note::Note(Music::ChromaticScalePosition note) :
	Music::Object(note)
{
}
//
//Music::Note::Note(int note) :
//	Music::Object(note)
//{
//}

Music::Note::Note(std::string note) :
	Music::Object(note)
{

}