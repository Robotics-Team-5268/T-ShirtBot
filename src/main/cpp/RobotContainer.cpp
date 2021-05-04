
#include "RobotContainer.h"
#include "commands/MoveArm.h"
#include "commands/DriveWithJoystick.h"
#include "commands/MoveDoubleSolenoid.h"
#include "commands/MoveSingleSolenoid.h"

RobotContainer::RobotContainer() : AutonomousCommand(&subsystem) {
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
  driverBtns[0]->WhileHeld(new MoveArm(&mArm, 1.0));
  driverBtns[1]->WhileHeld(new MoveArm(&mArm, -1.0));
  driverBtns[2]->WhenPressed(new MoveDoubleSolenoid(&mpneumatics, true));// moves double solenoid forward
  driverBtns[3]->WhenPressed(new MoveDoubleSolenoid(&mpneumatics, false));// moves double solenoid backward
  driverBtns[4]->WhenPressed(new MoveSingleSolenoid(&mpneumatics, true, 1)); // turns single solenoid on
  driverBtns[5]->WhenPressed(new MoveSingleSolenoid(&mpneumatics, false, 1));
  driverBtns[6]->WhenPressed(new CyclePneumatics());


}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &AutonomousCommand;
}
