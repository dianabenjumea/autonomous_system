#include <stdio.h>

// R1 	The robot shall avoid physical obstacles.	


// R1.1	The robot shall maintain a safe distance from obstacles.	


// R1.3	Initial robot position shall be obstacle free		


// R1.4	Current robot position shall be accurate	


/* R1.5	The vision subsystem shall confirm that the robot's initial recognized position 
matches the predefined starting position */


/* R1.6	The vision subsystem shall report that the current position is not a position 
with an obstacle. */



/* R1.7	The path to the next destination shall be calculated from the current robot 
position that the robot believes its location to be.*/


//R1.8	All obstacles shall be correctly identified		


// R1.9	An obstacle shall not be in the same location as a inspection point.	


// R1.10	The calculated path to destination shall not include a location with an obstacle.	


// R1.11	Robot shall not go faster than X kmph	



//R2 	The robot shall maintain a sufficient power level throughout the mission



/* R2.1	The robot shall monitor its battery level and activate a recharge process 
when it falls below a predefined threshold.	*/


// R2.2	The robot shall prioritizes reaching a charging station when battery levels are low.	


/* R2.3	The robot shall update its estimated battery charge every m minutes based on both 
the current battery sensor and the robot's history of activity*/





/*R2.6	Charging station shall be selected as the next destination whenever the recharge flag is set to true.							
R2.7	Battery monitor shall show battery charge 5% lower than currently estimated.							
R2.8	The interface recharge output shall be set to try when the current battery charge is lower than battery needed to reach the charging station from the current position plus 5% battery charge.							
R2.9	Once at charging station, robot shall remain there until battery reaches full charge.							
R2.10	Each step in the plan shall not use more than 1/n amount of battery							
R3 	The robot and personnel shall be protected from harmful radiation exposure.							
R3.1	The robot shall continually monitor radiation levels in its environment.							
R3.2	Initial robot position shall not be a location with out-of-range radiation levels.							
R3.3	The radiation monitor subsystem shall ensure that the initial robot measurement is equal to the manual set level							
R3.4	The radiation monitor subsystem shall ensure that the current position is not a position with out-of-range radiation levels.							
R3.5	Room radiation levels shall be correctly identified							
R3.7	The radiation level at the inspection points shall be within acceptable ranges.							
R3.8	The calculated path to destination shall not include a location with out-of-range radiantion levels.							
R3.9	Radiation levels shall be under R							
R3.10	The robot shall perform regular checks on its equipment's performance and initiate maintenance if anomalies are detected.							
R3.11	The robot shall undergo thorough decontamination procedures before and after each mission.							
R4	The robot shall visit all reachable inspection points.							
R4.1	All inspection points shall be correctly identified.							
R4.2	A valid inspection point position shall not be the same as the charging position.							
R4.3	A valid inspection point shall not be on the same location as a valid obstacle.							
R4.4	Visited inspection point shall be removed from the list of destinations to visit.							
R4.5	The closest inspection point that was not visited before shall be the current goal when recharge flag is false.							
R4.6	The shortest path to the current goal shall be selected.							
R4.7	The interface subsystem shall set at Goal flag to true only when the current robot position is equal to the current goal position.							
R5	The robot shall ensure data Integrity.							
R5.1	The robot shall implement redundant data storage systems to ensure data backup.							
R5.2	The robot shall regularly back up mission-critical data to minimize the risk of data loss.							
R5.3	The robot shall conduct periodic checks to verify data integrity during the mission.							
R5.4	The robot shall have established data recovery procedures in case of data corruption or loss.							
R6	The robot shall mitigate structural hazards.							
R6.1	The robot shall maintain continuous structural assessment and real-time mapping capabilities to identify and report any structural damage or hazards it encounters during the mission.							
R6.2	The robot shall have the capability to generate alternative navigation paths to avoid structural hazards while still reaching its intended destinations.							
R6.3	Real-time structural integrity monitoring subsystemt shall identify and avoid areas with potential structural hazards. */						