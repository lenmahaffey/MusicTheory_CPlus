#include "ScalePattern.h"
Music::ScalePattern::ScalePattern() :
	emptyScalePattern{ Music::Position::Step::NONE,
						Music::Position::Step::NONE,
						Music::Position::Step::NONE,
						Music::Position::Step::NONE,
						Music::Position::Step::NONE,
						Music::Position::Step::NONE,
						Music::Position::Step::NONE },
	harmonicMinorScalePattern{ Music::Position::Step::Half,
								Music::Position::Step::Whole,
								Music::Position::Step::Half,
								Music::Position::Step::Whole,
								Music::Position::Step::Whole,
								Music::Position::Step::Half,
								Music::Position::Step::WholeandAHalf },
	majorScalePattern{	Music::Position::Step::Whole,
						Music::Position::Step::Whole,
						Music::Position::Step::Whole,
						Music::Position::Step::Half,
						Music::Position::Step::Whole,
						Music::Position::Step::Whole,
						Music::Position::Step::Whole },

	melodicMinorScalePattern{	Music::Position::Step::Half,
								Music::Position::Step::Whole,
								Music::Position::Step::Half,
								Music::Position::Step::Whole,
								Music::Position::Step::Whole,
								Music::Position::Step::Whole,
								Music::Position::Step::Whole},
	naturalMinorScalePattern{	Music::Position::Step::Whole,
								Music::Position::Step::Whole,
								Music::Position::Step::Half,
								Music::Position::Step::Whole,
								Music::Position::Step::Whole,
								Music::Position::Step::Half,
								Music::Position::Step::Whole},
	pentatonicMajorScalePattern{	Music::Position::Step::WholeandAHalf,
									Music::Position::Step::Whole,
									Music::Position::Step::Whole,
									Music::Position::Step::WholeandAHalf,
									Music::Position::Step::Whole},
	pentatonicMinorScalePattern{	Music::Position::Step::Whole,
									Music::Position::Step::WholeandAHalf,
									Music::Position::Step::Whole,
									Music::Position::Step::Whole,
									Music::Position::Step::WholeandAHalf}
{
}
Music::ScalePattern::~ScalePattern()
{
}