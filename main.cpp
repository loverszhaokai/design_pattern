#include "NokiaFactory.h"

int main(int argc, char *argv[])
{
  NokiaFactory nokia;

  Phone* pm = nokia.CreateNokiaPhone("music");
  pm->print_type();

  Phone* pc = nokia.CreateNokiaPhone("commercial");
  pc->print_type();
  
  return 0;
}

