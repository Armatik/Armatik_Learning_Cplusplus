class Vehicle
{
    virtual void Move() = 0;
    virtual void  Weight() = 0;
};
class Car : public Vehicle
{
    virtual void Move();
    virtual void Weight();
}:
class Bus : public Vehicle
{
    virtual void Move();
    virtual void Weight();
};