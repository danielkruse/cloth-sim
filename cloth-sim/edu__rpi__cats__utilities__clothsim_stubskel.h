//This file is automatically generated. DO NOT EDIT!

#include "edu__rpi__cats__utilities__clothsim.h"
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

class edu__rpi__cats__utilities__clothsimFactory : public virtual RobotRaconteur::ServiceFactory
{
public:
virtual std::string GetServiceName();
virtual std::string DefString();
virtual RR_SHARED_PTR<RobotRaconteur::StructureStub> FindStructureStub(std::string s);
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRStructure> structin);
virtual RR_SHARED_PTR<RobotRaconteur::RRObject> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> mstructin);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceStub> CreateStub(std::string objecttype, std::string path, RR_SHARED_PTR<RobotRaconteur::ClientContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceSkel> CreateSkel(std::string objecttype, std::string path, RR_SHARED_PTR<RobotRaconteur::RRObject> obj, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual void DownCastAndThrowException(RobotRaconteur::RobotRaconteurException& exp);
virtual RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> DownCastException(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> exp);
};

class Velocity_stub : public virtual RobotRaconteur::StructureStub
{
public:
Velocity_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRObject> s);
virtual RR_SHARED_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> m);
};

class ClothState_stub : public virtual RobotRaconteur::StructureStub
{
public:
ClothState_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRObject> s);
virtual RR_SHARED_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> m);
};

class async_ClothSimulator
{
public:
virtual void async_getClothState(boost::function<void (RR_SHARED_PTR<ClothState >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
RR_SHARED_PTR<ClothState > async_getClothState(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<RR_SHARED_PTR<ClothState >>(boost::bind((void (async_ClothSimulator::*)(boost::function<void (RR_SHARED_PTR<ClothState >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_ClothSimulator::async_getClothState, this, _1,rr_timeout), rr_yield);
}
#endif

virtual void async_setGraspVelocities(RR_SHARED_PTR<Velocity > v00, RR_SHARED_PTR<Velocity > v10, RR_SHARED_PTR<Velocity > v01, RR_SHARED_PTR<Velocity > v11,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_setGraspVelocities(RR_SHARED_PTR<Velocity > v00, RR_SHARED_PTR<Velocity > v10, RR_SHARED_PTR<Velocity > v01, RR_SHARED_PTR<Velocity > v11,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_ClothSimulator::*)(RR_SHARED_PTR<Velocity >,RR_SHARED_PTR<Velocity >,RR_SHARED_PTR<Velocity >,RR_SHARED_PTR<Velocity >,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_ClothSimulator::async_setGraspVelocities, this, boost::ref(v00),boost::ref(v10),boost::ref(v01),boost::ref(v11),_1,rr_timeout), rr_yield);
}
#endif

};
class ClothSimulator_stub : public virtual ClothSimulator, public virtual async_ClothSimulator, public virtual RobotRaconteur::ServiceStub
{
public:
ClothSimulator_stub(const std::string& path, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual RR_SHARED_PTR<ClothState > getClothState();

virtual void setGraspVelocities(RR_SHARED_PTR<Velocity > v00, RR_SHARED_PTR<Velocity > v10, RR_SHARED_PTR<Velocity > v01, RR_SHARED_PTR<Velocity > v11);


virtual void DispatchEvent(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
private:
virtual void async_getClothState(boost::function<void (RR_SHARED_PTR<ClothState >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_getClothState(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<ClothState > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_setGraspVelocities(RR_SHARED_PTR<Velocity > v00, RR_SHARED_PTR<Velocity > v10, RR_SHARED_PTR<Velocity > v01, RR_SHARED_PTR<Velocity > v11,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_setGraspVelocities(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual std::string RRType();
};


class ClothSimulator_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(const std::string &name, const std::string &ind);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, const std::string& membername);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<edu::rpi::cats::utilities::clothsim::ClothSimulator > get_obj();

virtual RR_SHARED_PTR<edu::rpi::cats::utilities::clothsim::async_ClothSimulator > get_asyncobj();

protected:
static void rr_getClothState(RR_WEAK_PTR<edu::rpi::cats::utilities::clothsim::ClothSimulator_skel> skel, RR_SHARED_PTR<ClothState > ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_setGraspVelocities(RR_WEAK_PTR<edu::rpi::cats::utilities::clothsim::ClothSimulator_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
 public:
protected:bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
public: 
private:

};

}
}
}
}
}
