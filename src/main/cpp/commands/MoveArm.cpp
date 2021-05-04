/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/MoveArm.h"

MoveArm::MoveArm( Arm* aArm, double ispeed)
    : mArm( aArm ),
    speed(ispeed) {
  // Use addRequirements() here to declare subsystem dependencies.
  SetName( "MoveArm" );
   AddRequirements( mArm );
}

// Called when the command is initially scheduled.
void MoveArm::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void MoveArm::Execute() {
  mArm->Move(speed);
}

// Called once the command ends or is interrupted.
void MoveArm::End(bool interrupted) {
  mArm->Move(0.0);
}

// Returns true when the command should end.
bool MoveArm::IsFinished() { return false; }
