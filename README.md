//本demo主要由公众号：3D视觉工坊 整理。
//用于 「3D视觉从精通到入门」 知识星球成员学习。

#开源库plog的使用#

plog库的下载地址:  https://github.com/3DCVer/plog

像eigen一样，仅有.h或者.hpp文件，无需安装，包含进路径即可，可以参考demo中的CMakeLists.txt包含方式。

作用：
可以方便地输出程序中各个函数的调用信息，包括：
       enum Severity
       {
           none = 0,
           fatal = 1,
           error = 2,
           warning = 3,
           info = 4,
           debug = 5,
           verbose = 6
       };

请大家在init时，通过plog::init(plog::info,&consoleAppender); 将info分别改为fatal等，看一下运行效果。

这里推荐大家使用的原因，plog库很小，但是可以方便地输出各个函数的调用时间，以及控制输出warning、或者fatal等信息。






