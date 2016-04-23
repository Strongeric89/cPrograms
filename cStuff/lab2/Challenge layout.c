task main()
{

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



}//end main()
