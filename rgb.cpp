// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, showing rgb from 0-255

#include <iostream>

int main() {
    // This function shows numbers from 0-255

    // process
    for (int counterR = 0; counterR < 256; counterR++) {
        for (int counterG = 0; counterG < 256; counterG++) {
            for (int counterB = 0; counterB < 256; counterB++) {
                std::cout << "(" << counterR << ", " << counterG
                << ", " << counterB << ")" << std::endl;
            }
        }
    }
    std::cout << "Done.";
}
