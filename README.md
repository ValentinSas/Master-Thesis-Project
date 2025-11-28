#  Soft Robotic Prosthetic Hand — MSc Thesis Project



A hybrid **soft–rigid robotic hand** combining tendon-driven mechanics, **20 DIY McKibben pneumatic muscles**, embedded stretch/force sensors, and servo-driven lateral motion.  
Built to explore **high-DOF, human-like movement** using low-cost, off-the-shelf materials and accessible control electronics.

---

##  Features & Architecture

### **Finger Kinematics**
- 4 DOF per finger  
- 3 phalanges + base rotation  
- CAD-designed joints with guided cable channels  
- Biologically inspired proportions and motion ranges  

### **Actuation System**
- **20 pneumatic muscles** (balloon + mesh + IV connector + syringe)  
- Real contraction: **15–25 mm** (ideal: 32 mm)  
- Tendon-driven pull/release with low-friction rollers  
- **5× SG90 servos** for lateral finger movement & thumb opposition  

### **Sensing & Control**
- Stretch sensors on the dorsal side of fingers  
- Contact/force sensors on finger tips and inner phalanges  
- **Arduino Mega 2560** control with Wokwi-based simulation  
- Manual pneumatic input with serial feedback loop
<p align="center">
  <img src="https://github.com/user-attachments/assets/632c60cc-8fd1-4c28-9269-9e9a02796772" width="300"/>
</p>


---
##  Summary

This prototype demonstrates that **affordable soft–rigid hybrids** can achieve complex motion patterns, including sideways finger articulation, adaptive grasping, and multi-sensor tactile feedback.

Planned improvements include:
- Automated solenoid valve control  
- Stronger, more reliable pneumatic muscles  
- Low-friction joints using bushings or bearings  
- Fully closed-loop actuation and pressure regulation  

If you build upon this work, feel free to reference the thesis or open a PR.  
Happy hacking with soft robotics! 

