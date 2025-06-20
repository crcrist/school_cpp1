// #include "../PPP.h"
// #include "../PPP_support.h"
#include "../PPPheaders.h"

class Truck {
public:
  enum Color { BLACK, WHITE, RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET };

  string make;
  string model;
  int year;
  Color truckColor; // changed from string to color enum
  int numberOfSeats;
  int wheelSize;
  string transmissionType;
  float zeroToSixtyTime;

  struct Engine {
    int cylinders;
    string camshaft;
    string fuelDelivery;
    int miles;
  };

  Engine engine;

  string colorToString(Color c) {
    switch (c) {
    case BLACK:
      return "Black";
    case WHITE:
      return "White";
    case RED:
      return "Red";
    case ORANGE:
      return "Orange";
    case YELLOW:
      return "Yellow";
    case GREEN:
      return "Green";
    case BLUE:
      return "Blue";
    case INDIGO:
      return "Indigo";
    case VIOLET:
      return "Violet";
    default:
      return "Unknown";
    }
  }

  // function to set color by string
  void setColorByString(const string &colorStr) {
    if (colorStr == "Black")
      truckColor = BLACK;
    else if (colorStr == "White")
      truckColor = WHITE;
    else if (colorStr == "Red")
      truckColor = RED;
    else if (colorStr == "Orange")
      truckColor = ORANGE;
    else if (colorStr == "Yellow")
      truckColor = YELLOW;
    else if (colorStr == "Green")
      truckColor = GREEN;
    else if (colorStr == "Blue")
      truckColor = BLUE;
    else if (colorStr == "Indigo")
      truckColor = INDIGO;
    else if (colorStr == "Violet")
      truckColor = VIOLET;
    else {
      cout << "Invalid color, setting to Black\n";
      truckColor = BLACK;
    }
  }
  void init_engine(Engine &ee, int cylinders, string camshaft,
                   string fuelDelivery, int miles) {
    // check for valid engine, if valid, initialize
    if (cylinders > 0 && cylinders <= 16 && miles >= 0) {
      ee.cylinders = cylinders;
      ee.camshaft = camshaft;
      ee.fuelDelivery = fuelDelivery;
      ee.miles = miles;
      cout << "Engine initialized: " << cylinders << " cylinders, " << camshaft
           << " cam, " << fuelDelivery << ", " << miles << " miles\n";
    } else {
      cout << "Error: Invalid engine parameters!\n";
      ee.cylinders = 4;
      ee.camshaft = "Stock";
      ee.fuelDelivery = "Fuel Injection";
      ee.miles = 0;
    }
  }

  void add_miles(Engine &ee, int miles) {
    if (miles > 0) {
      ee.miles + -miles;
      cout << "Added " << miles << " miles. Total miles now: " << ee.miles
           << "\n";
    } else {
      cout << "Error: cannot add negative or zero miles!\n";
    }
  }

  void display_engine(const Engine &ee) {
    cout << "Engine Info: " << ee.cylinders << " cylinders, " << ee.camshaft
         << " cam, " << ee.fuelDelivery << ", " << ee.miles << " miles\n";
  }

  bool is_engine_newer(const Engine &e1, const Engine &e2) {
    return e1.miles < e2.miles; // lower miles = newer
  }

  void test_helper_functions() {
    cout << "\n=== testing helper functions ===\n";
    Engine stock;
    init_engine(stock, 6, "Stock", "Fuel Injection", 0);
    add_miles(stock, 1000);
    add_miles(stock, 5500);
    display_engine(stock);

    // test engine with invalid parameters
    Engine invalid;
    init_engine(invalid, -5, "Bad", "None", -100);
    display_engine(invalid);
  }
};

int main() {

  Truck truckObj1;
  truckObj1.make = "Chevy";
  truckObj1.model = "C20";
  truckObj1.year = 1982;
  truckObj1.truckColor = Truck::BLACK;
  truckObj1.numberOfSeats = 2;
  truckObj1.wheelSize = 16;
  truckObj1.transmissionType = "Automatic";
  truckObj1.zeroToSixtyTime = 7.8;

  truckObj1.init_engine(truckObj1.engine, 8, "Mild", "Carburetor", 96501);

  Truck truckObj2;
  truckObj2.make = "Chevy";
  truckObj2.model = "K3500";
  truckObj2.year = 1992;
  truckObj2.setColorByString("Red");
  truckObj2.numberOfSeats = 4;
  truckObj2.wheelSize = 16;
  truckObj2.transmissionType = "Manual";
  truckObj2.zeroToSixtyTime = 6.5;

  truckObj2.init_engine(truckObj2.engine, 8, "Aggressive", "Fuel Injection",
                        12403);

  cout << truckObj1.make << truckObj1.model << truckObj1.year
       << truckObj1.colorToString(truckObj1.truckColor)
       << truckObj1.numberOfSeats << truckObj1.wheelSize
       << truckObj1.transmissionType << truckObj1.engine.miles << "\n";
  truckObj1.display_engine(truckObj1.engine);

  cout << truckObj2.make << truckObj2.model << truckObj2.year
       << truckObj2.colorToString(truckObj2.truckColor)
       << truckObj2.numberOfSeats << truckObj2.wheelSize
       << truckObj2.transmissionType << truckObj2.engine.miles << "\n";
  truckObj2.display_engine(truckObj2.engine);

  if (truckObj1.zeroToSixtyTime < truckObj2.zeroToSixtyTime) {
    cout << "truck 1 is faster than truck 2\n";
  } else if (truckObj1.zeroToSixtyTime > truckObj2.zeroToSixtyTime) {
    cout << "truck 2 is faster than truck 1\n";
  } else {
    cout << "its a tie!\n";
  }
  cout << "\n=== Adding miles ===\n";
  truckObj1.add_miles(truckObj1.engine, 500);
  truckObj2.add_miles(truckObj2.engine, 1200);

  cout << "\n== Engine comparison ==\n";
  if (truckObj1.is_engine_newer(truckObj1.engine, truckObj2.engine)) {
    cout << "Truck 1 has a newer engine\n";
  } else if (truckObj2.is_engine_newer(truckObj2.engine, truckObj1.engine)) {
    cout << "Truck 2 has a newer engine\n";
  } else {
    cout << "both engines have the same mileage\n";
  }

  truckObj1.test_helper_functions();

  return 0;
}
