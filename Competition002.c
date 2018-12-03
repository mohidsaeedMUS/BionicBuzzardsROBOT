#pragma config(Motor,  port1,           BottomLeft,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           BottomRight,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           TopLeft,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           TopRight,      tmotorVex393_MC29, openLoop, reversed)

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks
	// running between Autonomous and Driver controlled modes. You will need to
	// manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;
}

task autonomous()
{
	/*
	motor[TopLeft] = 127;
	motor[TopRight]= 127;
	motor[BottomLeft] = 127;
	motor[BottomRight] = 	127;
	wait1Msec(1000);
	motor[TopLeft] = 0;
	motor[TopRight]= 0;
	motor[BottomLeft] = 0;
	motor[BottomRight] = 	0;
	*/
	AutonomousCodePlaceholderForTesting();

}

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
		//Sets the motors to the desired controller channels
		motor[TopLeft] = vexRT[Ch3];
		motor[TopRight]= vexRT[Ch2];
		motor[BottomLeft] = vexRT[Ch3];
		motor[BottomRight] = 	vexRT[Ch2];
	}


}
