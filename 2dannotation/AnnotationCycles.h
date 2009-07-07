#ifndef _annotate_AnnotationCycles_H_
#define _annotate_AnnotationCycles_H_

#include "Annotation.h"
#include "Cycle.h"
#include <mccore/GraphModel.h>
#include <vector>

namespace annotate
{
	class AnnotationCycles : public Annotation
	{
	public:
		AnnotationCycles(unsigned int auiMaxCycleSize = 0);
		virtual ~AnnotationCycles();
		
		virtual void update(const AnnotateModel& aModel);		
		virtual std::string output() const;
		
		const std::vector< Cycle >& getCycles() const;
		static const std::string& AnnotationName() {return mstrAnnotationName;}
		virtual const std::string& annotationName() {return AnnotationName();}
	private:
		static std::string mstrAnnotationName;
		std::vector< Cycle > mCycles;
		unsigned int muiMaxCycleSize;
		virtual void clear();
	};	
}
#endif /*_annotate_AnnotationCycles_H_*/
