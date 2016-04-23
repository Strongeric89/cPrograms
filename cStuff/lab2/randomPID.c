/*The Following program is the Labrynth challenge with a random function to pick wheter it goes to Point 2 or point B.*/

task main()
{
	nMotorPIDSpeedCtrl[motorC]= mtrSpeedReg; // left motor set to PID
	nMotorPIDSpeedCtrl[motorB]= mtrSpeedReg; // right motor set to PID

	int rand = random(2); //random function to pick 1 or 2

	if(rand == 0)

	{
	nMotorPIDSpeedCtrl[motorC]= mtrSpeedReg; // left motor set to PID
	nMotorPIDSpeedCtrl[motorB]= mtrSpeedReg;


	//random 1 to area 1
	motor[motorC] = 25;//left motor
	motor[motorB] = 25;//right motor
	wait1Msec(5000);//goes straight 26"

	motor[motorC] = -17;
	motor[motorB] = 17;
	wait1Msec(1000);//turns left 90dg

	motor[motorC] = 25;
	motor[motorB] = 25;
	wait1Msec(7000);//goes straight 32"

	motor[motorC] = 17;
	motor[motorB] = -17;
	wait1Msec(1000);//turns right 90dg

	motor[motorC] = 25;
	motor[motorB] = 25;
	wait1Msec(3000);//goes straight 32.5"

	motor[motorC] = 16;
	motor[motorB] = -16;
	wait1Msec(1000);//turns right 90dg

	motor[motorC] = 25;
	motor[motorB] = 25;
	wait1Msec(4000);//goes straight 15"

	//At goal area 2

	motor[motorC] = 17;
	motor[motorB] = -17;
	wait1Msec(2000);
	//Robot turns around


	}//en if
	else
	{
	nMotorPIDSpeedCtrl[motorC]= mtrSpeedReg; // left motor set to PID
	nMotorPIDSpeedCtrl[motorB]= mtrSpeedReg;

		//Random 2 to area 3
		motor[motorC] = 25;//left motor
		motor[motorB] = 25;//right motor
		wait1Msec(5000);//goes straight 26"

		motor[motorC] = -17;
		motor[motorB] = 17;
		wait1Msec(1000);//turns left 90dg

		motor[motorC] = 25;
		motor[motorB] = 25;
		wait1Msec(7000);//goes straight 32"

		motor[motorC] = -17;
		motor[motorB] = 17;
		wait1Msec(1000);//turns RIGHT 90dg

		motor[motorC] = 25;
		motor[motorB] = 25;
		wait1Msec(5000);//goes straight 32"

		motor[motorC] = -17;
		motor[motorB] = 17;
		wait1Msec(1000);//turns RIGHT 90dg

		motor[motorC] = 25;
		motor[motorB] = 25;
		wait1Msec(4000);//goes straight 32"

		motor[motorC] = -17;
		motor[motorB] = 17;
		wait1Msec(1000);//turns left 90dg

		motor[motorC] = 25;
		motor[motorB] = 25;
		wait1Msec(2000);//goes straight 32"




	}//end else

}//end main()
