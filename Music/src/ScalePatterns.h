#pragma once
#include "Position.h"
namespace Music
{
	class ScalePatterns
	{
	public:
		struct emptyScale
		{
			static Music::Position::Step emptyScalePattern[7];
			static int const scaleLength = sizeof(emptyScalePattern) / sizeof(emptyScalePattern[0]);
		};
		struct majorScale
		{
			static Music::Position::Step majorScalePattern[7];
			static int const scaleLength = sizeof(majorScalePattern) / sizeof(majorScalePattern[0]);
		};
		struct naturalMinorScale
		{
			static Music::Position::Step naturalMinorScalePattern[7];
			static int const scaleLength = sizeof(naturalMinorScalePattern) / sizeof(naturalMinorScalePattern[0]);
		};
		struct harmonicMinorScale
		{
			static Music::Position::Step harmonicMinorScalePattern[7];
			static int const scaleLength = sizeof(harmonicMinorScalePattern) / sizeof(harmonicMinorScalePattern[0]);
		};
		struct medlodicMinorScale
		{
			static Music::Position::Step melodicMinorScalePattern[7];
			static int const scaleLength = sizeof(melodicMinorScalePattern) / sizeof(melodicMinorScalePattern[0]);
		};
		struct pentatonicMajorScale
		{
			static Music::Position::Step pentatonicMajorScalePattern[7];
			static int const scaleLength = sizeof(pentatonicMajorScalePattern) / sizeof(pentatonicMajorScalePattern[0]);
		};
		struct pentatonicMinorScale
		{
			static Music::Position::Step pentatonicMinorScalePattern[7];
			static int const scaleLength = sizeof(pentatonicMinorScalePattern) / sizeof(pentatonicMinorScalePattern[0]);
		};
	};
}
