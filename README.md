# ProMicro_MacroPad

**Overview** <br>
This project is for anyone who wants to make an 8 key MacroPad. The parts will most likely cost more than buying one. It can be used for keybinds in many programs. 
It's perfect for switching between scenes in OBS or a mute/unmute button in Discord.

<blockquote class="imgur-embed-pub" lang="en" data-id="a/6hcVxPT"  ><a href="//imgur.com/a/6hcVxPT">MacroPad pics</a></blockquote>

https://imgur.com/SG8d7fy

**The programing:** <br>
The code was all programmed in C++ using the Arduino IDE. It can be programmed with F keys (i.e. F13, F14, ...).
It uses the [keyboard.h](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/) library. I have tried to make it as easy to reprogram as possible. 
It may be possible to program the MacroPad more efficiently. 

**The soldering:** <br>
There is a lot of SMD soldering. The smallest parts are 1206 resistors and capacitors. Some of the pads for the LEDs on the back do get very close. It will be an intermediate to advanced soldering project. (I have been soldering for a while so, SMD soldering is easy for me.) [SMD Soldering Guide](https://www.youtube.com/watch?v=VxMV6wGS3NY&t=544s)


**The PCB:** <br>
Use the Gerber files to make the PCBs. It's a two-layer PCB and a 1.6 mm board. A black solder mask will look better but will add some time and possible cost.  

**The switches** <br>
The PCB has the holes for an MX style switch. The PCB has the holes for a plate mount switch. If you have a PCB mount switch, the extra legs need to be cut off


![Imgur Image](http://i.imgur.com/zTONrOD.jpg)
