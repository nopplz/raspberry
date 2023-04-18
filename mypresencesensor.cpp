class PresenceSensor : public PollingComponent, public sensor
{
    public:
    ld2410 ld(); //déclaration du pin
    bool presence = false;
    PresenceSensor() : PollingComponent(10000) {}
    void setup() override {
        ld().begin();
    }
    void update() override {
        if (presenceDetected() == true) {
            if movingTargetDetected() == true {
                presence = true;
            }
        }
    }
}