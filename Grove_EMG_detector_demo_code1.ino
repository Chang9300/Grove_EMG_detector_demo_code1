// Grove - EMG Sensor demo code


int max_analog_dta      = 300;              // max analog data
int min_analog_dta      = 100;              // min analog data
int static_analog_dta   = 0;                // static analog data


// get analog value

int getAnalog(int A0)
{
    long sum = 0;
    for(int i=0; i<2; i++)
    {
      sum += analogRead(A0);
    }
    return sum;
}

void setup()
{
    Serial.begin(2000000);
    
    //long sum = 0;
    
    //for(int i=0; i<=10; i++)
    //{
    //    for(int j=0; j<100; j++)
    //    {
    //        sum += getAnalog(A0);
    //        delay(8);
    //    }
    //}
    //sum /= 1100;
    //static_analog_dta = sum;

    //Serial.print("static_analog_dtaQAQ = ");
    //Serial.println(static_analog_dta);
    Serial.println("CLEARSHEET"); // clears sheet starting at row 1
    Serial.println("LABEL,Date,Time,Timer,Counter,A0");
}

int i=0;
void loop()
{

       int val = getAnalog(A0);                    // get Analog value
       Serial.print("DATA, , ,TIMER,");
       //Serial.print(i++);
       Serial.print(",");
       Serial.println(val);    //印出A0的數值
       delay(16);
    
}
