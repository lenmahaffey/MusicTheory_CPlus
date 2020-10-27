#pragma once
#include "Note.h"

// Constructors
Music::Note::Note(Music::ChromaticScale note) :
	Music::Object(note),
	weight(Music::GetWeight(note))
{
}

Music::Note::Note(int note) :
	Music::Object(note),
	weight(Music::GetWeight(Music::Object::getName()))
{
}

Music::Note::Note(char note) :
	Music::Object(note),
	weight(Music::GetWeight(Music::Object::getName()))
{
}

Music::Note::Note(std::string note) :
	Music::Object(note),
	weight(Music::GetWeight(Music::Object::getName()))
{

}

// Accessors
Music::Weight Music::Note::getWeight()
{
	return Music::Note::weight;
}