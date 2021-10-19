#include "LeaderAgent.h"
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
LeaderAgent::LeaderAgent(GameWorld* world,
    Vector2D position,
    double    rotation,
    Vector2D velocity,
    double    mass,
    double    max_force,
    double    max_speed,
    double    max_turn_rate,
    double    scale,
    Vehicle* agentSuivi) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale,agentSuivi),

   m_pWorld(world)
  
{
    
    //set up the steering behavior class
    m_pSteering = new SteeringBehavior(this);


    //Comportements
   

    Steering()->WanderOn();
}


//---------------------------- dtor -------------------------------------
//-----------------------------------------------------------------------
LeaderAgent::~LeaderAgent()
{
    delete m_pSteering;

}


 

