#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <memory>
#include <string>
#include <initializer_list>

#include "defines.h"

namespace cpr {

    struct Parameter {
        template<typename KeyType, typename ValueType>
        Parameter(KeyType&& key, ValueType&& value) : key{CPR_FWD(key)}, value{CPR_FWD(value)} {}

        std::string key;
        std::string value;
    };

    class Parameters {
      public:
        Parameters() = default;
        Parameters(const std::initializer_list<Parameter>& parameters);

        std::string content;
    };

} // namespace cpr

#endif
