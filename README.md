# LineFollowerRobot
Simble Line Follower robot using arduino  
Line Follower Robot (LFR) is a simple autonomously guided robot that follows a line drawn on the ground to either detect a dark line on a white surface or a white line on a dark.      
a line follower robot using Arduino, which is a very common microcontroller board. The robot will use two infrared proximity sensors to detect the line and on the basis of input received from the sensors, the Arduino will direct the motors to move with the help of a motor shield.  
# Required Components:
## The parts required to build the robot are as follows:  
• Chassis (including motors and wheels )  
• Arduino Uno r3    
• L293D Motor Shield  
• IR Proximity Sensors (pair)  
• Jumper Wires    
• Switch  
• 4AA Battery Holder    
## Tools required:-  
• Soldering Iron  
• Hot Glue Gun  
• Screw Driver  
# Working of a Line Follower Robot :  
As stated earlier, line follower robot (LFR) follows a line, and in order to follow a line, robot must detect the line first. Now the question is how to implement the line sensing mechanism in a LFR. We all know that the reflection of light on the white surface is maximum and minimum on the black surface because the black surface absorbs maximum amount of light. So, we are going to use this property of light to detect the line. To detect light, either LDR (light-dependent resistor) or an IR sensor can be used. For this project, we are going with the IR sensor because of its higher accuracy. To detect the line, we place two IR sensors one on the left and other on the right side of the robot. We then place the robot on the line such that the line lies in the middle of both sensors.  
Infrared sensors consist of two elements, a transmitter and a receiver. The transmitter is basically an IR LED, which produces the signal and the IR receiver is a photodiode, which senses the signal produced by the transmitter.  
The IR sensors emits the infrared light on an object, the light hitting the black part gets absorbed thus giving a low output but the light hitting the white part reflects back to the transmitter which is then detected by the infrared receiver, thereby giving an analog output Using the stated principle, we control the movement of the robot by driving the wheels attached to the motors, the motors are controlled by a microcontroller.  
![Caققققققققققpture](https://user-images.githubusercontent.com/112608294/189407974-349865ac-573c-42d3-af12-9977a638b35d.PNG)  
# How does a Line Follower Robot Navigates?
A typical line follower robot has two sets of motors, let's call them left motor and right motor. Both motors rotate on the basis of the signal received from the left and the right sensors respectively.   
The robot needs to perform 4 sets of motion which includes moving forward, turning left, turning right and coming to a halt. 
## The description about the cases are given below:  
![Caقققققققققققققققققققققققققpture](https://user-images.githubusercontent.com/112608294/189408437-111b6fd8-abbc-47dc-ae30-69588d16125e.PNG)
In this case, when both the sensors are on a white surface and the line is between the two sensors, the robot should move forward, i.e., both the motors should rotate such that the robot moves in forward direction (actually both the motors should rotate in the opposite direction due to the placement of motors in our 
setup. But for the sake of simplicity, we will call the motors rotating forward.  
![Caثثثثثثpture](https://user-images.githubusercontent.com/112608294/189408742-1d165dd0-73a1-47d7-b8e1-2e1c8e3e00ee.PNG)
In this case, the left sensor is on top of the dark line, whereas the right sensor is on the white part, hence the left sensor detects the 
black line and gives a signal, to the microcontroller. Since, signal comes from the left sensor, the robot should turn to the left direction. Therefore, the left motor rotates backwards and the right motor rotates in forward direction. Thus, the robot turns towards left side.  
![Caثثثثثثثثثثثثثثثثثثثثثثثثثثثثثpture](https://user-images.githubusercontent.com/112608294/189408913-d1705973-373d-4edc-85bb-7138e7243574.PNG)
This case is similar to the left case, but in this situation only the right sensor detects the line which means that the robot should turn in the right direction. To turn the robot towards the right direction, the left motor rotates forward and the right motor rotates backwards and as a result, the robot turns towards the right 
direction.  
![Capققققققغغغغغغغغغغture](https://user-images.githubusercontent.com/112608294/189409020-8904062a-15e6-4b6e-9eb6-00ccf1a218ab.PNG)  
In this case, both the sensors are on top of the line and they can detect the black line simultaneously, the microcontroller is fed to consider this situation as a process for halt. Hence, both the motors are stopped, which causes the robot to stop moving.





