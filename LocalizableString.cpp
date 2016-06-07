//
//  LocalizableString.cpp
//
//  Created by Nikolay Khramchenko on 5/4/16.
//
//

#include "LocalizableString.hpp"
#include "Parameters.hpp"

LocalizableString * LocalizableString::instance = nullptr;

LocalizableString::LocalizableString() {
    std::string xml = cocos2d::FileUtils::getInstance()->getStringFromFile("Localizable.xml");

    strings.load(xml.c_str());

}

std::string LocalizableString::get(std::string str) {
    CCLOG("%s ", str.c_str());
    if (LocalizableString::instance == nullptr) {
        LocalizableString::instance = new LocalizableString();
    }

    auto c = LocalizableString::instance->strings.child("LocalizableString").child(str.c_str());
    if (c == NULL) {
        return str;
    }

    auto result = c.child(Parameters::getInstance()->language.c_str());
    if (result == NULL) {
        result = c.child("EN");
    }

    std::string r = result.attribute("string").value();

    std::string find = "\\n";
    std::string replace = "\n";

    for(std::string::size_type i = 0; (i = r.find(find, i)) != std::string::npos;) {
        r.replace(i, find.length(), replace);
        i += replace.length();
    }
    return r;
}
