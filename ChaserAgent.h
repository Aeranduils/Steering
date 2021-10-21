#ifndef CHASER_AGENT_H
#define CHASER_AGENT_H

#include "Vehicle.h"


class ChaserAgent : public Vehicle
{
public:

	ChaserAgent(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale, Vehicle* pLeader, Vector2D offset);

	~ChaserAgent();

	void setOffset(Vector2D offset);
	void setLeader(Vehicle* leader);

	Vector2D offset;
	Vehicle* leader;





private:

	//a pointer to the world data. So a vehicle can access any obstacle,
//path, wall or agent data
	GameWorld* m_pWorld;

	//the steering behavior class
	SteeringBehavior* m_pSteering;

};

#endif