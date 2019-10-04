//
//  main.cpp
//  Test1
//
//  Created by Eric Chang on 10/4/19.
//  Copyright © 2019 Eric Chang. All rights reserved.
//

#include <iostream>
#include "function.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
	int hi;
    double b;
    std::cout << "Hello, World!\n";
	cin >> hi;
	cout << hi + hi << endl;
    cin >> b;
    cout << area (b) << endl;
    return 0;
}
