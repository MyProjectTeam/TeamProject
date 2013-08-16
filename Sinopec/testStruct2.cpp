#include "stdio.h"
#include <iostream>
#include <vector>

using namespace std;

typedef struct {

char cM1;
short sM2;
int iM3;

}testStruct;

typedef struct {

char cM1;
int iM3;
short sM2;

}testStruct2;

void func(int x,int y)
{
cout<<endl<<x<<","<<y<<endl;
}

int main(void)
{
  //cout<<endl<<sizeof(testStruct)<<","<<sizeof(testStruct2)<<endl;
  //int i = 1;
  //func(i++,++i);

  unsigned char testChar = 0XFE;

  if(testChar == 0XFE)
  {
     cout<<"wow"<<endl;
  }

  return 0;
}

