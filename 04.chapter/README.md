# 第 4 章 复合类型

## 4.1 数组
数组（array）是一种数据格式，能够存储多个**同类型**的值。

创建数组需要指明：
1. 存储在每个元素中的值的类型；
2. 数组名；
3. 数组中的元素数。

声明数组的通用格式如下：
*typeName arrayName[arraySize]*;

C++ 11将使用大括号的初始化（列表初始化）作为一种通用初始化方式，可用于所有类型。

*注意：但使用列表初始化，禁止缩窄转换。*

```c++
long plifs[] = {25, 92, 3.0} // not allowed
```

上面语句不能编译通过，因为浮点数转换为整型是缩窄操作。

## 4.2 字符串

C++处理字符串的方式用两种：C-风格字符串（C-style string）、string类库。

C-风格字符串使用字符数组表示字符串，且以空字符（null character）结尾，空字符被写作 **\0**，用来标记字符串的结尾。 如下声明，只有第二个数组是字符串：

```c++
char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string
char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // a string
```

更方便的表示方式：

```C++
char cat[8] = "fatessa";
```

用引号括起的字符串隐式地包括结尾地空字符，另外，各种C++输入工具通过键盘输入，将字符串读入到char数组中时，自动添加结尾地空字符。

*在确定存储字符串所需地最短数组时，要将结尾地空字符计算在内。*

+ 面向行的输入

  1. *cin.getline(arrayName, count)* ——读取一行并丢弃换行符

     参数arrayName表示存储输入行的数组的名称；参数count表示要读取的字符数。

  2. *cin.get()* ——读取一行保留换行符

     多种重载方式，使用时可查看

## 4.3 string类库

要使用string类，必须在程序中包含头文件string。

```c++
#include<string>
string str1 = "panther";
string str2 = {"panther"};// C++ 11
```

## 4.4 结构

结构式用户定义的类型，而结构声明定义了这种类型的数据属性。

```c++
struct inflatable // structure declaration
{
    char name[20];
    float volume;
    double price;
}

inflatable hat; // hat is a structure variable of type inflatable
```

## 4.5 共用体

共用体（union）是一种数据格式，它能够存储不同的数据类型，但只能同时存储其中的一种类型。

```c++
union one4all
{
    int int_val;
    long long_val;
    double double_val;
}
```

匿名共用体（anonymous union）没有名称，其成员将成为位于相同地址处的变量。

```c++
union
{
    int int_val;
    long long_val;
    double double_val;
}
```

## 4.6 枚举

```c++
enum spectrum
{
    red, orange, yellow
}
```

## 4.7 指针和自由存储空间





下面内容 待补充。。。