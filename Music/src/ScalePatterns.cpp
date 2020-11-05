#include "ScalePatterns.h"
static Music::Position::Step emptyScalePattern[7]
{
	Music::Position::Step::NONE,
	Music::Position::Step::NONE,
	Music::Position::Step::NONE,
	Music::Position::Step::NONE,
	Music::Position::Step::NONE,
	Music::Position::Step::NONE,
	Music::Position::Step::NONE,
};
static Music::Position::Step HarmonicScalePattern[7]
{
	Music::Position::Step::Half,
	Music::Position::Step::Whole,
	Music::Position::Step::Half,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Half,
	Music::Position::Step::WholeandAHalf
};
static Music::Position::Step majorScalePattern[7]
{
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Half,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole
};



static Music::Position::Step melodicScalePattern[7]
{
	Music::Position::Step::Half,
	Music::Position::Step::Whole,
	Music::Position::Step::Half,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole
};

static Music::Position::Step naturalScalePattern[7]
{
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Half,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::Half,
	Music::Position::Step::Whole
};

static Music::Position::Step pentatonicMajorScalePattern[7]
{
	Music::Position::Step::WholeandAHalf,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::WholeandAHalf,
	Music::Position::Step::Whole
};

static Music::Position::Step pentatonicMinorScalePattern[7]
{
	Music::Position::Step::Whole,
	Music::Position::Step::WholeandAHalf,
	Music::Position::Step::Whole,
	Music::Position::Step::Whole,
	Music::Position::Step::WholeandAHalf
};