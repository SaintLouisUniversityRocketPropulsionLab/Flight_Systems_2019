// import farmer keith bme280 github lib
// import lsm9ds1 lib
// import SD card lib
// import flash lib if enough space


enum FlightStates{pad_idle, launch_event, boost_phase, burnout_event, coast_phase, apogee_event, descent_phase, touchdown_event};
FlightStates flight_state = pad_idle;

enum led_state{flash, solid, off, blink};
byte pwr_led = 14;    // red led - check on soldered board
byte stat_led = 13;   // green led

int accel_data[3]
int gyro_data[3];
int mag_data[3];
int temp_data;
int press_data;
int hum_data;

int a=0, g=1, m=2, t=3, p=4, h=5;

unsigned long chrono[6] = {0, 0, 0, 0, 0, 0};

void ToggleFlight(){
  switch (flight_state){
    case pad_idle: {
      if (millis() - chrono[a] >= 1) {
        chrono[a] = millis();
        // pull accel data continuously
      }
      if (millis() - chrono[t] >= 60000){
        chrono[t] = millis();
        chrono[p] = millis();
        // pull temp and press data every 60 sec
      }
      
    }
    case launch_event: {}
    case boost_phase: {}
    case burnout_event: {}
    case coast_phase: {}
    case apogee_event: {}
    case descent_phase: {}
    case touchdown_event: {}
  }
  
}


void ToggleStatus(){
  
}

void LedFlash{
  
}

void LedSolid{
  
}

void LedBlink{
  
}

void setup() {
  pinMode(pwr_led, OUTPUT);
  digitalWrite(pwr_led, HIGH);
  pinMode(stat_led, OUTPUT);
  digitalWrite(stat_led, LOW);

  //Initialize sensors

}

void loop() {
  // put your main code here, to run repeatedly:

}
