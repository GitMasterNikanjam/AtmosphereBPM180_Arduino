/*!
 * @file Adafruit_BMP085.h
 *
 * This is a library for the Adafruit BMP085/BMP180 Barometric Pressure + Temp
 * sensor
 */

Reference repoisitory: https://github.com/adafruit/Adafruit-BMP085-Library

// #define BMP085_I2CADDR 0x77 //!< BMP085 I2C address

// User Function for Adafruit_BMP085 Library:

  //bool begin(uint8_t mode = BMP085_ULTRAHIGHRES, TwoWire *wire = &Wire);
  /*
   * @brief Gets the temperature over I2C from the BMP085
   * @return Returns the temperature
   */
  //float readTemperature(void);
  /*
   * @brief Gets the pressure over I2C from the BMP085
   * @return Returns the pressure
   */
  //int32_t readPressure(void);
  /*
   * @brief Calculates the pressure at sea level
   * @param altitude_meters Current altitude (in meters)
   * @return Returns the calculated pressure at sea level
   */
  //int32_t readSealevelPressure(float altitude_meters = 0);
  /*
   * @brief Reads the altitude
   * @param sealevelPressure Pressure at sea level, measured in pascals
   * @return Returns the altitude
   */
  //float readAltitude(float sealevelPressure = 101325); // std atmosphere
