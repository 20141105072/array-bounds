//
//  main.cpp
//  array bounds
//
//  Created by 20141105072 on 15/12/9.
//  Copyright © 2015年 20141105072. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[3];
    int b[5];
    a[0]=10;
    a[1]=15;
    a[2]=20;
    b[0]=2;
    b[1]=4;
    b[2]=6;
    b[3]=8;
    b[4]=10;
    printf("a[0]=%d b[0]=%d a[1]=%d b[1]=%d a[2]=%d b[2]=%d", a[0],b[0],a[1],b[1],a[2],b[2]);
    printf("&a[0]=%x &a[1]=%x &a[2]=%x &b[0]=%x &b[1]=%x &b[2]=%x &b[3]=%x &b[4]=%x\n",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    return 0;
}
