#pragma once

#ifdef BASE64LIB_EXPORTS
	#define BASE64LIB_API __declspec(dllexport)
#else
	#define BASE64LIB_API __declspec(dllimport)
#endif // BASE64LIB_EXPORTS


namespace base64
{
	BASE64LIB_API std::string b64encode(const std::string& str);
	BASE64LIB_API std::string b64decode(const std::string& str64);
	const std::string b64decode(const void* data, const size_t& len);
	const std::string b64encode(const void* data, const size_t& len);
}
