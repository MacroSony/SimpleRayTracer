﻿#include "vec3.h"
#include "color.h"
#include "ray.h"


#include <iostream>

int main() {

    // Image

    const int image_width = 256;
    const int image_height = 256;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j) {
        std::cerr << "\rRows Remaining: " << j << " " << std::flush;
        for (int i = 0; i < image_width; ++i) {
            color pix_color(double(i) / (image_width - 1), double(j) / (image_height - 1), 1.0);
            write_color(std::cout, pix_color);
        }
    }
    
    std::cerr << "\nDone\n";
}