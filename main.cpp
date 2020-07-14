//
//  main.cpp
//  The Answer is always 3
//
//  Created by Ezazul Hoque on 15/7/20.
//  Copyright © 2020 Ezazul Hoque. All rights reserved.
//


#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    int y;
    cout << "Choose a Number" << endl;
    cin >> x;
    //Formula
    y = (((2*x)+6)/2)-x;
    
    cout << "Multiply it by 2 and add 6" << endl;
    usleep(8000000);
    cout << "Divide by 2" << endl;
    usleep(8000000);
    cout << "Substract with the original number" << endl;
    usleep(8000000);
    cout <<"Your number is "<< y << std::endl;

    return 0;
}
