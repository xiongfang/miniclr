# light.net

light.net is a lightweight clr(common language runtime) designed to provide a useful subset of dotnet's features, suitable for building self-contained applications.

# 开发路线图

1.读取并解析.Net dll文件的数据

2.搭建虚拟机基础框架，包括:

- 基础流程：解析数据，运行指令，退出。
- 基础模块：内存管理（方法区内存，托管内存），运行时栈。

3.构建运行时类型系统


4.完成IL指令的解释执行


# 编码规范

- 跨平台编译系统采用CMake
- 文件名采用小写
- 所有模块相关代码放在同一个目录
- 每个模块如果有公有类，则需要添加一个public目录，给其他模块使用
- 每个模块的私有代码，放置在private目录

# 编译

## Windows

CMake + VisualStudio
- 下载CMake
- 指定项目目录
- 指定输出目录为${项目目录}/build
- Configure & Generate & OpenProject
- 打开Visual Studio编译

NetBeans + CMake + Cygwin

- [http://blog.csdn.net/x_studying/article/details/59111657](http://blog.csdn.net/x_studying/article/details/59111657)

## Mac

## Linux

# 参考标准

- [微软ECMA标准](https://github.com/xiongfang/coreclr/blob/master/Documentation/project-docs/dotnet-standards.md)

# 参考资料

- [微软coreclr说明文档](https://github.com/xiongfang/coreclr/blob/master/Documentation/README.md)