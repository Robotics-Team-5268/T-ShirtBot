
#include "RobotContainer.h"
#include "commands/move_flag.h"
#include "commands/DriveWithJoystick.h"

RobotContainer::RobotContainer() : autonomousCommand(&subsystem) {
  // Initialize all of your commands and subsystems here
  driverJoystick.reset(new frc::Joystick(0));
  for (int i=1; i<=10; i++){
    driverBtns.push_back(new frc2::JoystickButton(driverJoystick.get(), i));
  }

  drive.SetDefaultCommand( DriveWithJoystick( &drive, driverJoystick ) );

  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
  driverBtns[0]->WhileHeld(new move_flag(&mflag)); 
  

}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &autonomousCommand;
}
