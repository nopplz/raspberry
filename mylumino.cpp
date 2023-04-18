class Lumino : public PollingComponent, public sensor
{
public :
    DFRobot_B_LUX_V30B dfr(); //déclaration du pin
    Lumino() : PollingComponent(15000) {}
     void setup() override {
      dfr().begin();
    // This will be called by App.setup()
  }
   void update() override {
    float lumino = dfr().lightStrengthLux(); //donne la luminosité
  }
};