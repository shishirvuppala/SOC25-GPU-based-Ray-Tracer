#include <iostream>
#include "vec.h"
using namespace std;

int main(){
    int image_width = 256;
    int image_height = 256;

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int i = 0;i<image_height;i++){
        for(int j = 0;j<image_width;j++){
            auto r = double(i) / (image_width-1);
            auto b = double(j) / (image_width-1);
            auto g = 1.0;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}