#include <cstdint>
#include <iostream>
#include <array>

struct mateCal {
  uint8_t date[5];
};

using namespace std;

int main(){

    array<bool, 8> bits;
    array<uint8_t, 8> bitValues;

        mateCal mark;
        mark.date[0] = 0b11001100;
        mark.date[1] = 0b00110011;
        mark.date[2] = 0b11001100;
        mark.date[3] = 0b00110011;
        mark.date[4] = 0b11001100;



    for(size_t j =0; j < sizeof(mark.date); j++){
            for (size_t i=0; i < 8; ++i){
                bits[i]  = (mark.date[j] & (1 << i)) != 0;
                bitValues[i] = bits[i] ? 1 : 0;
            }
            for (const auto& bit : bitValues) {
                cout << static_cast<int>(bit);
            }
                cout << endl;
    }
};
