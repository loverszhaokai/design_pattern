#ifndef _NOKIA_FACTORY_H
#define _NOKIA_FACTORY_H

#include <string>

#include "Phone.h"

using std::string;

class NokiaFactory {
public:
  Phone* CreateNokiaPhone(const string& type);
};

#endif
