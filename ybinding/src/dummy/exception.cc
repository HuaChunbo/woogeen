/*
 * Intel License
 */

#include <woogeen/base/exception.h>

namespace woogeen {
namespace base {

Exception::Exception() : Exception("Unknown exception.") {}

Exception::Exception(const std::string& message) : message_(message) {}

std::string Exception::Message() {
  return message_;
}

StreamException::StreamException() : StreamException(kUnkown) {}

StreamException::StreamException(const enum ExceptionType& type)
    : StreamException(type, "Unkown stream exception.") {}

StreamException::StreamException(const enum ExceptionType& type,
                                 const std::string& message)
    : Exception(message), type_(type) {}

StreamException::ExceptionType StreamException::Type() {
  return type_;
}

}
}
