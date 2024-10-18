// BMP180 Pressure Sensor Functions:

#if(BMP_ENA == true) 

  // Initialization BMP sensor.
  // Return 1 for error. Return 0 for Success.
  int init_bmp(void)      
  {
    return !BMP.begin();   // begin method Returns true = 1 if successful
  }

  // read and calculate average for num_ave number data with dt[ms] time interval.
  void bmp_readData(int num_ave, int dt)
  {
    float _temperature = 0;
    float _pressure = 0;
    float _altitude = 0;
  
    for(int i=1; i<=num_ave; i++)
    {
      _temperature += (BMP.readTemperature()/(float)num_ave);
      _pressure += (BMP.readPressure()/(float)num_ave);
      _altitude += (BMP.readAltitude()/(float)num_ave);
      delay(dt);
    }
    
    air.temperature = _temperature;
    air.pressure = _pressure;
    air.altitude = _altitude;
    air.density = _pressure/(air.R * (_temperature + 273.15));      // Density = P / (R * T)
  }

#endif  // BMP_ENA
