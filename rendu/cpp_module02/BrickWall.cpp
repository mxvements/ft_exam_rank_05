#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::~BrickWall(void){}

BrickWall *BrickWall::clone(void){
    BrickWall *rslt = new BrickWall();
    return (rslt);
}