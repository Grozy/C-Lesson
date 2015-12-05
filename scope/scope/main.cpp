//
//  main.cpp
//  scope
//
//  Created by 孙国志 on 15/12/5.
//  Copyright (c) 2015年 孙国志. All rights reserved.
//

#include <iostream>

int reused = 42; //全局作用域

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    int sum = 0;
    //sum 用于存放从1到10所有数的和
    for (int val = 1; val <= 10; ++val) {
        sum += val; //等价于 sum = sum + val;
        std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    }
    
    /*
     嵌套作用域，被包含（或者说被嵌套）的作用域称为内层作用域（inner scope），包含着别的作用域的作用域为外层作用域（outer scope）。
     */
    int unique = 0;//块作用域
    //输出 #1：使用全局变量reused；输出42 0
    std::cout << reused << " " << unique << std::endl;
    int reused = 0; //新建局部变量
    //输出 #2：使用局部变量reused; 输出 0 0
    std::cout << reused << " " << unique << std::endl;
    //输出 #3：显示的访问全局变量reused;输出 42 0
    std::cout << ::reused << " " << unique << std::endl;
    int _ = 0;
    double Double = 1.1;
    printf("%d", _);
    
    int i = 100;
    sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    return 0;
}
/*
 这段程序定义了3个名字:main、sum和val，同时使用了命名空间名字std，该空间提供了2个名字cout和cin供程序使用。
 名字main定义于所有花括号以外。它和其他大多数定义在函数体之外的名字一样有全局作用域(global scope)。一旦声明之后，全局作用域内的名字在整个程序的范围之内都可以使用。 sum定义在main函数所限定的作用域之内，从生命sum开始知道main函数结束位置都可以访问它，但是除了main函数的区域便不可访问。因此说变量sum拥有块作用域(block scope)。名字val定义域fo语句内，在for语句之内可以访问val，但是在main函数的其他部分便不可访问它了。
*/