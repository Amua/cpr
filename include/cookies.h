#ifndef COOKIES_H
#define COOKIES_H

#include <map>
#include <string>
#include <sstream>
#include <initializer_list>

namespace cpr {

    class Cookies {
      public:
        Cookies() {}
        Cookies(const std::initializer_list<std::pair<const std::string, std::string>>& pairs);
        Cookies(const std::map<std::string, std::string>& map) : map_{map} {}

        std::string& operator[](const std::string& key);
        std::string GetEncoded() const;

      private:
        std::map<std::string, std::string> map_;
    };

} // namespace cpr

#endif
