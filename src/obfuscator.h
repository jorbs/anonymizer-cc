//
//  obfuscator.h
//  anonymizer
//
//  Created by João Roberto on 30/09/19.
//

#ifndef OBFUSCATOR_H
#define OBFUSCATOR_H

class Obfuscator {
    int kernelSize;
    float sigma;
    int boxKernelSize;
public:
    Obfuscator(const int &kernelSize = 21, const float &sigma = 2, const int &boxKernelSize = 9);
    
private:
    float gaussianKernel() const;
};

#endif /* obfuscator_hpp */
