#ifndef LEADER_AGENT_H
#define LEADER_AGENT_H

#include "Vehicle.h"


class LeaderAgent : public Vehicle
{
public:

	LeaderAgent(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale);

	~LeaderAgent();

	void ToggleFlocking();

	void ToggleWandering();

	void FlockingOff();

	void WanderOff();

	bool isWanderOn();

	bool isFlockingOn();

	bool isHumanOn();

	void ToggleHuman();

private:

	//a pointer to the world data. So a vehicle can access any obstacle,
//path, wall or agent data
	GameWorld* m_pWorld;

	//the steering behavior class
	SteeringBehavior* m_pSteering;







};

#endif