//本demo主要由公众号：3D视觉工坊 整理。
//用于 「3D视觉从精通到入门」 知识星球成员学习。

#include<iostream>
#include"plog/Log.h"
#include"plog/Init.h"
#include<plog/Formatters/TxtFormatter.h>
#include<plog/Appenders/ColorConsoleAppender.h>

void init_project()
{
    static plog::ColorConsoleAppender<plog::TxtFormatter> consoleAppender;

   //    enum Severity
   //    {
   //        none = 0,
   //        fatal = 1,
   //        error = 2,
   //        warning = 3,
   //        info = 4,
   //        debug = 5,
   //        verbose = 6
   //    };

    plog::init(plog::info,&consoleAppender);
}

int addAB(int A,int B)
{
    return (A+B);
}

int main()
{
  init_project();
  PLOG_INFO<<"cout hello ... "<<std::endl;
  std::cout<<"hello "<<std::endl;

  PLOG_INFO<<"begin A+B ... "<<std::endl;

  int a = 1, b = 2;
  int C = addAB(a,b);
  PLOG_INFO<<"end A+B ... "<<std::endl;

  return 0;

}
