  
#ifndef ___Mystring_H_
#define __Mystring_H_

#include <cstdlib>
#include "string.h"
using namespace std;
class mystring
{
private:
    char* m_str;
    size_t m_len;

public:
mystring::mystring():m_str(0),m_len(0)
{

}

mystring::mystring(const char* s)
{
  size_t len=strlen(s);
  m_len=len;
  m_str=new char[len+1];
  strncpy(m_str,s,m_len);
}

mystring::mystring(const mystring& ref)
{
    this->m_len=ref.m_len;
    this->m_str=new char[this->m_len];
    strncpy(this->m_str,ref.m_str,this->m_len);

}

size_t mystring::get_len()
{
    return m_len;
}

char* mystring::get_str()
{
    return m_str;
}

mystring mystring::operator+(const mystring& ref)
{
    mystring temp;
    temp.m_str=strcat(this->m_str,ref.m_str);
    temp.m_len=this->m_len+ref.m_len;
    return temp;

}

mystring& mystring::operator=(const mystring& ref)
{
  this->m_str=ref.m_str;
  this->m_len=ref.m_len;

  return (*this);
}


mystring& mystring::operator+=(const mystring& ref){
    this->m_str=strcat(m_str,ref.m_str);
    this->m_len=m_len+ref.m_len;

    return (*this);

}


 mystring::~mystring()
 {

 }
};

#endif //__MYSTRING_H_