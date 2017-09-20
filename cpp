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

chap5 C++注释  --ok
提高源码的可读性 单行注释和多行注释

chap6 C++数据类型 --ok
各种变量保存各种信息
变量保存的是所存值的内存位置  创建一个变量 内存中保留一些空间
基本的内置类型
用户自定义数据类型

硬件 操作系统 编译器 应用程序

typedef int  fell;
#define a 10


枚举类型 C++中一种派生数据类型 有用户自定义的若干枚举常量集合

enum XIE{
    a,
    b,
    c,
    d
}xie;

enum color{red,green,blue}c;
c = blue;

chap7 C++变量类型
变量时 程序可操作的存储区的名称，C++每个变量都有指定的类型，
运算符可以应用在变量上。
wchar_t

C++允许定义各种其他类型的变量      枚举指针数组引用 数据结构 类

定义 声明 使用 各种类型的变量。


数据类型   基本类型
变量类型   基本的变量类型
C++ 变量定义  告诉编译器 创建变量的内存  变量定义指 定义指定一个数据类型 一个或者多个变量的列表。
int a;
Dog myDog;      用户自定义的对象

变量可以在声明的时候初始化

extern  int k=2,f=3;  变量声明
int a=3,b=4;          变量定义

全局变量 静态变量 局部变量  初始化

C++中的变量声明： 变量在头部被声明，主函数内被定义和初始化的

C++ 中的变量声明

变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。
变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。

当您使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），变量声明就显得非常有用。
您可以使用 extern 关键字在任何地方声明一个变量。虽然您可以在 C++ 程序中多次声明一个变量，但变量只能在某个文件、函数或代码块中被定义一次。



























