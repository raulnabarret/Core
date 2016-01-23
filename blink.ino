/*
    Hello World! over the Internet
    Raul Nabarret - Cuadrangular
    cuadrangular.mx
*/
int led = D7; //Pin D7 will be used to turn on/off the LED


void setup()
{

    pinMode(led, OUTPUT); //We use the variable led as an OUTPUT

   /*We declare a function from Spark that will decide either
   to turn on or off the LED depending on the option we choose on the HTML.
   The first parameter of the function is the variable,
   the second parameter is the name of the function*/
   Spark.function("led",ledToggle);


   digitalWrite(led, LOW); //LED turned off after we call the function

}


void loop()
{

}


int ledToggle(String command) {
    /* Spark.functions always take a string as an argument and return an integer.
    Since we can pass a string, it means that we can give the program commands on how the function should be used.
    In this case, telling the function "on" will turn the LED on and telling it "off" will turn the LED off.
    Then, the function returns a value to us to let us know what happened.
    In this case, it will return 1 for the LEDs turning on, 0 for the LEDs turning off,
    and -1 if we received a totally bogus command that didn't do anything to the LEDs.
    */

    if (command=="on") {
        digitalWrite(led1,HIGH);
        digitalWrite(led2,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        return 0;
    }
    else {
        return -1;
    }
}
