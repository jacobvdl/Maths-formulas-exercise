#include <iostream>

float functionOne(float x) { // this works
    x = (x * x) + (2 * x) - 7;
    return x;
}

float functionTwo(float a, float b, float c) { // need to check this
    float part1 = sqrt((b * b) - (-4 * a * c));
    if (part1 <= 0)
        part1 = 0;
    float result = ((b*-1)+part1) / (2*a);
    return result;
}

float functionThree(float s, float e, float t) { // works
    float result = s + (e - s) * t;
    return result;
}

float functionFour(float x1, float x2, float y1, float y2) { // works
    float result = sqrt(((x1 - x2) * 2) + ((y1 - y2) * 2));
    if (result <= 0)
        result = 0;
    return result;
}

float functionFive(float x1, float x2, float y1, float y2, float z1, float z2) { // works
    float result = x1 * x2 + y1 * y2 + z1 * z2;
    return result;
}

float functionSix(float x1, float x2, float y1, float y2, float z1, float z2) { // need to check this
    float part1 = x1 * x2 + y1 * y2 + z1 * z2;
    float part2 = sqrt((x1 * 2) + (y1 * 2) + (z1 * 2));
    float result = part1 / part2;
    return result;
}

//float functionSeven(float t, float p0, float p1, float p2, float p3) {
//    float result = 
//}

int main()
{
    std::cout << functionOne(25) << std::endl;
    std::cout << functionTwo(4, 2, 3) << std::endl;
    std::cout << functionThree(5, 3, 2) << std::endl;
    std::cout << functionFour(5, 6, 8, 6) << std::endl;
    std::cout << functionFive(5, 6, 8, 6, 5, 3) << std::endl;
    std::cout << functionSix(5, 6, 8, 6, 5, 3) << std::endl;

}

