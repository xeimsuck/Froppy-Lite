#pragma once
#include <stdexcept>

/*!
	@file
	@author Xeim
	@version 1.0
	@data 16.11.24
 */

namespace cfp::parse{
	/*!
	@brief represent parse error
	 */
	class parse_error final : public std::runtime_error {
	public:
		explicit parse_error(const std::string& err = "");
	};
}
