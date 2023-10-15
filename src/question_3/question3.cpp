#include "question3.h"

using std::cout;

bool test_config()
{
    return true;
}

void change_Param(int &param)
{

  param =5;
  
}

void const_change_Param(const int &param)
{
cout<<"param: " <<param<<"\n";
}