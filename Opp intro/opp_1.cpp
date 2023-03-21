#include "opp_1.hpp"

namespace tad{
void Cube::setlength(int length){
    length_ = length;
}

int Cube::getvolume(){
    return length_*length_*length_;
}

int Cube::getsurfacearea(){
    return 6*length_*length_;
}
}