//
//  main.cpp
//  pointer
//
//  Created by gmr on 15/12/16.
//  Copyright © 2015年 gmr. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //std::cout << "Hello, World!\n";
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x &a=%x p=%x &p=%x *p=%x\n",a,&a,p,&p,*p);
    return 0;
}
