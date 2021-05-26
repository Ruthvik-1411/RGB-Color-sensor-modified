# RGB-Color-sensor-modified
It is a simple circuit that detects the color of light  around it( RGB in this case) 
<br>As you can see the led pins and ldr input pin are declared in the beginning.<br>
<br>The action of the pins has been declared in setup.<br>
<br>Generally we will be needing two circuits to operate. one that will 'on' the led and other which detects the colour.<br>
<br>They must be independent of each other. As it is difficult to create two different circuits, both of them were combined into one single code. However their action is independent even if they are in the same code.<br>
<br>In the combined code we send a character through serial monitor and for the corresonding char the led glows which tells the LDR to start detecting.
In loop, we can get the sensor working in two ways.<br>
<br>one is by reading values always i.e. the sensor reads the LDR pin and sensor every step(second).This is not likely to be used in applications as this way consumes more power as it works always. we dont need it working always. we only want it to work when there is some light to detect.<br>
<br>so the first line in comments with an if statement(serial.available) ensures that unless you let an led glow the LDR will not work. This way we make sure that the sensor detects only when the led glows.<br>
<br>You can copy this code into your ide and run it both ways and you can observe the difference yourself.<br>
<br>The end of the code has some values such as 500,400. These are the values the LDR detects and send to analog pin. These are found by making LDR circuit and detecting the analog values in presence of different Leds.<br>

<br>Note: This circuit only tells if the light is red, green or blue. It cannot detect the intensity of R,G,B( , , ) of a colour. It is different and another application of the same LDR.<br> 
