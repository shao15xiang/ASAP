 #ifndef __SOURCE_LOADING_H__
#define __SOURCE_LOADING_H__

#include <memory>
#include <string>

#include "WorklistDataAcquisitionInterface.h"

namespace ASAP::Worklist::Data
{
	std::unique_ptr<WorklistDataAcquisitionInterface> LoadDataSource(const std::string source_path);
}
#endif // __SOURCE_LOADING_H__