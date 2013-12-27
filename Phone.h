#ifndef _PHONE_H_
#define _PHONE_H_

#include <string>

using std::string;

class Phone {
public:
  Phone(const string& _type) : type(_type) {};
  virtual ~Phone() {};
  virtual void print_type() = 0;
  
protected:
  string type;
};

class MusicPhone : public Phone {
public:
  MusicPhone(const string& _type) : Phone(_type) {};
  virtual ~MusicPhone() {};
  virtual void print_type();
};

class CommercialPhone : public Phone {
public:
  CommercialPhone(const string& _type) : Phone(_type) {};
  virtual ~CommercialPhone() {};
  virtual void print_type();
};

#endif
