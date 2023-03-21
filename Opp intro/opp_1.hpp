#pragma once

using namespace std;

namespace tad{
class Cube{
    public:
       void setlength(int length_);
       int getvolume();
       int getsurfacearea();
    private:
       int length_;
};
}