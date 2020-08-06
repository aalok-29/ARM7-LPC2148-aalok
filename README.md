# LPC2148

## GPIO(General Purpose Input Output)Pins

**IOPIN:**

It is a GPIO Port Pin Value register and can be used to read or write values directly to the pin. The status of the Pins that are configured as GPIO can always be read from this register irrespective of the direction set on the pin (Input or Output).

The syntax for this register is `IOxPIN`, where ‘x’ is the port number i.e. `IO0PIN` for `PORT0` and `IO1PIN` for `PORT1`.

**IODIR:**

It is a GPIO Port Direction Control register and is used to set the direction i.e. either input or output of individual pins. When a bit in this register is set to ‘0’, the corresponding pin in the microcontroller is configured as Input. Similarly, when a bit is set as ‘1’, the corresponding pin is configured as Output.

The syntax for this register is `IOxDIR`, where ‘x’ is the port number i.e. `IO0DIR` for `PORT0` and `IO1DIR` for `PORT1`.

**IOSET:**

It is a GPIO Port Output Set Register and can be used to set the value of a GPIO pin that is configured as output to High (Logic 1). When a bit in the IOSET register is set to ‘1’, the corresponding pin is set to Logic 1. Setting a bit ‘0’ in this register has no effect on the pin.

The syntax for this register is `IOxSET`, where ‘x’ is the port number i.e. `IO0SET` for `PORT0` and `IO1SET` for `PORT1`.

**IOCLR:**

It is a GPIO Port Output Clear Register and can be used to set the value of a GPIO pin that is configured as output to Low (Logic 0). When a bit in the IOCLR register is set to ‘1’, the corresponding pin in the respective Port is set to Logic 0 and at the same time clears the corresponding bit in the IOSET register. Setting ‘0’ in the `IOCLR` has no effect on the pin.

The syntax for this register is `IOxCLR`, where ‘x’ is the port number i.e. `IO0CLR` for `PORT0` and `IO1CLR` for `PORT1`.
