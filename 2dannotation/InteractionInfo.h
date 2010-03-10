#ifndef _InteractionInfo_H_
#define _InteractionInfo_H_

#include <string>

#include "ModelInfo.h"

namespace annotate {

class InteractionInfo
{
public:
	// LIFECYCLE ---------------------------------------------------------------
	InteractionInfo(
		const std::string& astrFile,
		unsigned int auiModel,
		const std::string& astrRes1,
		const std::string& astrRes2);
	~InteractionInfo() {}

	// ACCESS ------------------------------------------------------------------
	const ModelInfo& getModelInfo() const {return mModelInfo;}
	const std::string& getRes1() const {return mstrRes1;}
	const std::string& getRes2() const {return mstrRes2;}

	// OPERATOR ----------------------------------------------------------------
	bool operator <(const InteractionInfo& aRight) const;
	InteractionInfo& operator=(const InteractionInfo& aRight);

private:
	ModelInfo		mModelInfo;
	std::string 	mstrRes1;
	std::string 	mstrRes2;
};

}; // namespace annotate

#endif /*_InteractionInfo_H_*/