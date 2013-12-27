#include "NokiaFactory.h"

Phone*
NokiaFactory::CreateNokiaPhone(const string& type) {
  Phone* p;
  if ("music" == type) {
    p = new MusicPhone("music");
  } else {
    p = new CommercialPhone("Commercial");
  }

  return p;
}
