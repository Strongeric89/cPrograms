/*the following program is for Lab 1. Lets move the robot forward and turn in a square shape within an infinite loop*/
task main()
{

	int i=0;// counter for for loop
	int k=0;// counter for while loop

	while(k==0)
	{
		for(i=0;i<4;i++)
		{

		// moves forword 25
		motor[motorB] =25; //  B=RIGHT
		motor[motorC] =25; //  C=LEFT
		wait1Msec(3000); // 3 seconds

		//turns right
		motor[motorB] =25; // B=RIGHT
		motor[motorC] =-25; //C=LEFT
		wait1Msec(665); // 3 seconds

		}//end for
	}//end while // this will run in an infinite loop

}//end main
