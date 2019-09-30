//
//  obfuscator.cpp
//  anonymizer
//
//  Created by João Roberto on 30/09/19.
//

#include <stdexcept>

#include "obfuscator.h"

Obfuscator::Obfuscator(const int &kernelSize, const float &sigma, const int &boxKernelSize) :
    kernelSize(kernelSize),
    sigma(sigma),
    boxKernelSize(boxKernelSize)
{
    if (kernelSize % 2 == 0) {
        throw std::runtime_error("kernelSize must be odd");
    }
}

float Obfuscator::gaussianKernel() const {
    float interval = (2 * sigma + 1.0f) / (float) kernelSize;
    float x = 0;
    //         x = np.linspace(-sigma - interval / 2., sigma + interval / 2., kernel_size + 1)

}
