/*the following program is for Lab 1. Lets move the robot CIRCLE*/
task main()
{

	int i=0; // counter for for loop
	for(i=0;i<5;i++)
	{

	// moves forword 25
	motor[motorB] =50; // power is 0 B=RIGHT
	motor[motorC] =25; //power is 0  C=LEFT
	wait1Msec(7000); // 1 seconds

	}//end for // runs 5 times
}//end main
