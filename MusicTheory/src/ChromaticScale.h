#pragma once
#include <string>

namespace Music
{
	enum class ChromaticScale
	{
		NONE,
		A,
		AsBf,
		B,
		C,
		CsDf,
		D,
		DsEf,
		E,
		F,
		FsGf,
		G,
		GsAf
	};

	Music::ChromaticScale GetNoteFromChromaticScale(char note);
	Music::ChromaticScale GetNoteFromChromaticScale(std::string note);
	Music::ChromaticScale GetNoteFromChromaticScale(int note);

	std::string GetNoteNameAsString(ChromaticScale note);
};

