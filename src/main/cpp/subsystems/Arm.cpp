/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Arm.h"

Arm::Arm() {
    SetName( "Arm" );
}

void Arm::Move(double percent){
    if (!toplimitSwitch.Get() || 
        !bottomlimitSwitch.Get()){
            motor.Set(percent);
        }
    else{
        motor.Set(0);
    }
    }

// This method will be called once per scheduler run
void Arm::Periodic() {}
