//
//  main.cpp
//  scope
//
//  Created by 孙国志 on 15/12/5.
//  Copyright (c) 2015年 孙国志. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int sum = 0;
    //sum 用于存放从1到10所有数的和
    for (int val = 1; val <= 10; ++val) {
        sum += val; //等价于 sum = sum + val;
        std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    }
    return 0;
}
