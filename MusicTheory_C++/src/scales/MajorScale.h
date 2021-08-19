/*
	CSC160 8N0 Computer Science 1
	File: MajorScale.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: MajorScale class declaration. Implements virtual Scale class
*/
#pragma once
#include "../Scale.h"
#include "../Step.h"

namespace Music {

    class MajorScale : public Music::Scale
    {
	public:
		MajorScale();
		MajorScale(Music::Pitch note);
		MajorScale(int note);
		MajorScale(std::string note);

	protected:
		Music::Step pattern[7] = {	Music::Step::Whole,
									Music::Step::Whole,
									Music::Step::Whole,
									Music::Step::Half,
									Music::Step::Whole,
									Music::Step::Whole,
									Music::Step::Whole};

	private:
		void resolveScale();
	};
}

