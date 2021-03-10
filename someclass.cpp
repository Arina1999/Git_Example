#include <iostream>
#include "someclass.h"

SomeClass::SomeClass(const bool someBoolData,const int someIntData)
{
  m_someBoolData = someBoolData;
  m_someIntData = someIntData;
}

bool SomeClass::someBoolData() const
{
   return m_someBoolData;
}

int SomeClass::someIntData() const
{
   return m_someIntData;
}

void SomeClass::setSomeBoolData(const bool someBoolDate )
 {
      m_someBoolData=someBoolDate;
  }

void SomeClass::setSomeIntlData(const int someIntDate )
{
    m_someIntData=someIntDate;
}
