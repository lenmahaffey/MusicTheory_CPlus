/*
	CSC160 8N0 Computer Science 1
	File: MusicException.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: MusicException class declaration
*/
#pragma once
#include <string>
namespace Music{
	class MusicException
	{
	public:
		MusicException();
		MusicException(std::string message);
		std::string GetMessage() const;

	private:
		std::string message;
	};
}