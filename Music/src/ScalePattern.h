#pragma once
#include "Position.h"
namespace Music
{
	class ScalePattern
	{
	public:
		ScalePattern();
		~ScalePattern();
		Music::Position::Step emptyScalePattern[7];
		Music::Position::Step naturalMinorScalePattern[7];
		Music::Position::Step harmonicMinorScalePattern[7];
		Music::Position::Step majorScalePattern[7];
		Music::Position::Step melodicMinorScalePattern[7];
		Music::Position::Step pentatonicMajorScalePattern[5];
		Music::Position::Step pentatonicMinorScalePattern[5];
	};
}
