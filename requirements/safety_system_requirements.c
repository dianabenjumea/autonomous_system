#include <stdio.h>
#include <stdbool.h>

//CONSTRAINTS DEFINITION
#define CRITICAL_DISTANCE_THRESHOLD 0.1
#define RETURN_DISTANCE 0.15
#define REMAINING_BATTERY_THRESHOLD 0.2
#define RADIATION_LEVEL_THRESHOLD 20 



/* R1.1.1	The robot shall have an emergency stop mechanism that activates when an obstacle 
is detected within a critical range of distance. */

bool checkObstacleAndActivateEmergencyStop(float currentDistance) {
    bool emergencyStop = false;
    if (currentDistance < CRITICAL_DISTANCE_THRESHOLD) {
        emergencyStop = true;
    }
    return emergencyStop;
}

/* R1.1.2	The robot shall return to initial position when an obtacle is detected within a 
defined range of distance */

bool checkObstacleAndReturnInitialPosition(float currentDistance) {
    bool returnInitialPosition = false;
    if (currentDistance < RETURN_DISTANCE) {
        returnInitialPosition = true;
    }
    return returnInitialPosition;
}



//R2.4	The robot shall return to initial position if battery levels become critically low.

bool checkRemainingBatteryAndReturnInitialPosition(float currentRemainingBattery) {
    bool returnInitialPosition = false;
    if (currentRemainingBattery < REMAINING_BATTERY_THRESHOLD) {
        returnInitialPosition = true;
    }
    return returnInitialPosition;
}



//R3.4.1 If radiation levels has exceded robot shall go to exit inmediatelly							

bool checkRadiationLevelsAndGoToExit(float currentRadiationLevel) {
    bool goToExit = false;
    if (currentRadiationLevel > RADIATION_LEVEL_THRESHOLD) {
        goToExit = true;
    }
    return goToExit;
}



int main(){
    float currentDistance = 0.20;
    float currentRemainingBattery = 0.1;
    float currentRadiationLevel = 25;
    bool emergencyStopActivated = checkObstacleAndActivateEmergencyStop(currentDistance);
    
    if (emergencyStopActivated) {
        printf("Emergency stop activated.\n");
    } else {
        printf("Robot is operating normally.\n");
    }

    bool startReturnInitialPositionObstacle = checkObstacleAndReturnInitialPosition(currentDistance);

    if (startReturnInitialPositionObstacle) {
        printf("Starting the return to the initial position due to obstacle detection.\n");
    } else {
        printf("Robot is operating normally.\n");
    }

    bool startReturnInitialPositionBattery = checkRemainingBatteryAndReturnInitialPosition(currentRemainingBattery);
    if (startReturnInitialPositionBattery) {
        printf("Starting the return to the initial position due to low battery levels.\n");
    } else {
        printf("Robot is operating normally.\n");
    }

    bool goToExitRadiation = checkRadiationLevelsAndGoToExit(currentRadiationLevel);
    if (goToExitRadiation) {
        printf("Moving towards the exit due to high radiation levels.\n");
    } else {
        printf("Robot is operating normally.\n");
    }

    return 0;
}