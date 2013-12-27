#include "Phone.h"

#include <iostream>

using std::cout;
using std::endl;

void
MusicPhone::print_type() {
  cout << "MusicPhone::print_type()" << endl;
  cout << "type=" << type << endl;
}

void
CommercialPhone::print_type() {
  cout << "CommercialPhone::print_type()" << endl;
  cout << "type=" << type << endl;
}
