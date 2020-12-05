/*
	CSC160 8N0 Computer Science 1
	File: MusicException.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Class to implement exceptions for Music Theory program
*/
#include "MusicException.h"

Music::MusicException::MusicException()
{

}
Music::MusicException::MusicException(std::string m)
{
	message = m;
}

std::string Music::MusicException::GetMessage() const
{
	return message;
}