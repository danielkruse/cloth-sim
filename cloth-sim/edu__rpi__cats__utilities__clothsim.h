//This file is automatically generated. DO NOT EDIT!

#include <RobotRaconteur.h>
#include <boost/signals2.hpp>
#pragma once

namespace edu
{
namespace rpi
{
namespace cats
{
namespace utilities
{
namespace clothsim
{

class Velocity;
class ClothState;
class ClothSimulator;

class Velocity : public RobotRaconteur::RRStructure {
public:
double vx;
double vy;
double vz;

virtual std::string RRType() {return "edu.rpi.cats.utilities.clothsim.Velocity";  }
};

class ClothState : public RobotRaconteur::RRStructure {
public:
double t;
uint16_t numX;
uint16_t numY;
uint32_t n_points;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > x;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > y;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > z;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > fx;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > fy;
RR_SHARED_PTR<RobotRaconteur::RRArray<double > > fz;

virtual std::string RRType() {return "edu.rpi.cats.utilities.clothsim.ClothState";  }
};

class ClothSimulator : public virtual RobotRaconteur::RRObject
{
public:
virtual RR_SHARED_PTR<ClothState > getClothState()=0;

virtual void setGraspVelocities(RR_SHARED_PTR<Velocity > v00, RR_SHARED_PTR<Velocity > v10, RR_SHARED_PTR<Velocity > v01, RR_SHARED_PTR<Velocity > v11)=0;

virtual std::string RRType() {return "edu.rpi.cats.utilities.clothsim.ClothSimulator";  }
};

}
}
}
}
}
