/*
 * Intel License
 */

#include <woogeen/conference/conferenceexception.h>

namespace woogeen {
namespace conference {

ConferenceException::ConferenceException() : ConferenceException(kUnkown) {}

ConferenceException::ConferenceException(const enum Type& type)
    : ConferenceException(type, "Unkown P2P exception.") {}

ConferenceException::ConferenceException(const enum Type& type,
                                         const std::string& message)
    : Exception(message), type_(type) {}
}
}
