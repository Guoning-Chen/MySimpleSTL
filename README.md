# MySimpleSTL更新日志
## 5-12
创建了GitHub仓库和vs工程

作用域的学习：

- 作用域操作符`::`
- 头文件不应该包含using，primer给出的
- 命名空间可以嵌套
- 命名空间可以定义在不同的文件中，`namespace <名称>{...}`语句既可以是定义命名空间，也可以认为是向命名空间添加新内容。

模板类的学习：
- 模板有函数模板和类模板，模板是泛型编程的基础
- 模板的定义：
- 函数模板和类模板成员函数的定义通常放在头文件中
- STL中basic_string就是一个模板类，输入的参数类型不同，