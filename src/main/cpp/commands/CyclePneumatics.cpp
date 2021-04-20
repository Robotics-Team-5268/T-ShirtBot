/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/CyclePneumatics.h"

CyclePneumatics::CyclePneumatics(Pneumatics* mpneumatics) 
: pneumatics(mpneumatics)
{
  // Use addRequirements() here to declare subsystem dependencies.
  SetName("CyclePneumatics");
  AddRequirements(pneumatics);
}

// Called when the command is initially scheduled.
void CyclePneumatics::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void CyclePneumatics::Execute() {
  if (pneumatics->cycle > 6){
    pneumatics->cycle = 1;
  }
  MoveSingleSolenoid(pneumatics, true, pneumatics->cycle);
  std::chrono::seconds(1);
  MoveSingleSolenoid(pneumatics, false, pneumatics->cycle);
  pneumatics->cycle +=  1;
}
// Called once the command ends or is interrupted.
void CyclePneumatics::End(bool interrupted) {

}

// Returns true when the command should end.
bool CyclePneumatics::IsFinished() {
   return false; 
}
