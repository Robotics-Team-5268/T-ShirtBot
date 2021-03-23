
#include "commands/DriveWithJoystick.h"

DriveWithJoystick::DriveWithJoystick( Drive* iDrive, const std::shared_ptr<frc::Joystick>& iJoystick )
  : drive( iDrive )
  , joystick( iJoystick )
{
  SetName( "DriveWithJoystick" );
  AddRequirements( drive );
}

// Called when the command is initially scheduled.
void DriveWithJoystick::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute() {
  drive->Acceleration(
    -joystick->GetRawAxis(1),
	  -joystick->GetRawAxis(5)
  );
}

// Called once the command ends or is interrupted.
void DriveWithJoystick::End(bool interrupted) {}

// Returns true when the command should end.
bool DriveWithJoystick::IsFinished() { return false; }
