/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Drive.h"


// To Do: Set up Invert

Drive::Drive() {
    mOldLeftSpeed = 0.0;
	mOldRightSpeed = 0.0;

    mspeedControllerFL.SetInvert(SCFL_INVERTED);
    mspeedControllerFR.SetInvert(SCFR_INVERTED);
    mspeedControllerBL.SetInvert(SCBL_INVERTED);
    mspeedControllerBR.SetInvert(SCBR_INVERTED);
}

void Drive::setMotors(float leftSpeed, float rightSpeed) {
    mDiffDrive.TankDrive(leftSpeed, rightSpeed, false);
}



// This method will be called once per scheduler run
void Drive::Periodic() {}
