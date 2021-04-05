# RGB-Color-sensor-modified
It is a simple circuit that detects the color of light  around it( RGB in this case) 
As you can see the led pins and ldr input pin are declared in the beginning.
The action of the pins has been declared in setup.
Generally we will be needing two circuits to operate. one that will 'on' the led and other which detects the colour.
They must be independent of each other. As it is difficult to create two different circuits, both of them were combined into one single code. However their action is independent even if they are in the same code.
In loop, we can get the sensor working in two ways.
one is by reading values always i.e. the sensor reads the LDR pin and sensor every step(second).This is not likely to be used in applications as this way consumes more power as it works always. we dont need it working always. we only want it to work when there is some light to detect. 
so the first line in comments with an if statement(serail.available) ensures that unless you let an led glow the LDR will not work. This way we make sure that the sensor detects only when the led glows.
You can copy this code into your ide and run it both ways and you can observe the difference yourself.
The end of the code has some values such as 500,400. These are the values the LDR detects and send to analog pin. These are found by making LDR circuit and detecting the analog values in presence of different Leds.
