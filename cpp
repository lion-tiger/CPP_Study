c++ 笔记
chap1 C++教程    --ok
面向对象的程序设计语言  多平台 windows mac unix(linux)
初学者  理解 基础到高级的概念
chap2 C++简介  --ok
C++ 静态类型的 编译时的 通用的 大小写敏感的 不规则的编程语言
支持面向过程 面向对象 泛型编程

中级语言   进一步扩充和完善了c   带类的c

使用静态类型的编程语言 在编译时执行类型检查，而不是在运行时执行静态检查


C++完全支持面向对象的程序设计，   封装 继承 多态 抽象


标准的C++语言 = 核心语言 + 标准库 + STL

ANSI标准

重要的是理解概念，而不是深究语言的技术细节

更好的程序员 更有效率的设计和实现新系统 更好的维护就系统

small talk

chap3  C++环境设置   --ok
C++语言环境 = 文本编辑器 + C++编译器

输入程序

notepad brief epsilon emacs vim/vi  os edit command
源文件 源代码 .cpp .cp .c

可读的源代码 编译成 机器语言

最常用的免费的可用的 编译器 是GNC C/C++

Linux  GCC 
MacOS  XCODE
Window MinGW

其他的GNU工具


Visual Studio   Win32 Console Application

g++
c++标准库 与c标准库
gcc hello.cpp -lstdc++ -o main
编译 连接

g++ -g -Wall -std=c++11 main.cpp
g++常用命令选项


chap4 C++基本语法  --ok
C++程序为 对象的 集合 对象 通过 调用彼此的方法进行交互。
类 对象 方法 即时变量
对象 状态 和 行为 
对象是类的实例
类 定义描述 对象行为 状态模板  蓝图
方法 一个方法表示一种行为 一个类包含多个方法         方法中逻辑 操作数据 执行动作
即时变量 对象的状态由这些即时变量的值创建的

C++程序结构
头文件 std命名空间
终止函数 并想调用进程返回0

写源代码 编译 并运行它
make file 编译C/C++程序

;  语句结束符  表明一个逻辑实体的结束

C++ 标识符    变量 函数 类 模块

@%$&
C++关键字


三字符 组   预处理器  字符常量 字符创字面值
C++中的空格







