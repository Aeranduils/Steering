#include "ChaserAgent.h"
#include "Vehicle.h"
#include "2d/C2DMatrix.h"
#include "2d/Geometry.h"
#include "SteeringBehaviors.h"
#include "2d/Transformations.h"
#include "GameWorld.h"
#include "misc/CellSpacePartition.h"
#include "misc/cgdi.h"

using std::vector;
using std::list;


//----------------------------- ctor -------------------------------------
//------------------------------------------------------------------------
ChaserAgent::ChaserAgent(GameWorld* world,
    Vector2D position,
    double    rotation,
    Vector2D velocity,
    double    mass,
    double    max_force,
    double    max_speed,
    double    max_turn_rate,
    double    scale, Vehicle* pLeader) : Vehicle(world,position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale, pLeader),

    m_pWorld(world)
  
{
   

    //set up the steering behavior class
    m_pSteering = new SteeringBehavior(this);

    Steering()->FlockingOff();
    Steering()->OffsetPursuitOn(pLeader, Vector2D(1, 1));

   

}


//---------------------------- dtor -------------------------------------
//-----------------------------------------------------------------------
ChaserAgent::~ChaserAgent()
{
    delete m_pSteering;
    
}

