//
//  LocalizableString.hpp
//
//  Created by Nikolay Khramchenko on 5/4/16.
//
//

#ifndef LocalizableString_hpp
#define LocalizableString_hpp

#include <string>
#include "pugixml.hpp"

class LocalizableString {
private:
    LocalizableString();
    static LocalizableString * instance;
    pugi::xml_document strings;
public:
    static std::string get(std::string str);
};

#endif /* LocalizableString_hpp */
