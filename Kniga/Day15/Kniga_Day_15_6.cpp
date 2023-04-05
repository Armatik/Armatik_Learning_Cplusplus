#include <iostream.h>
class Animal;
void setValue(Animal& , int);

class Animal
{
public:
friend void setValue(Animal&, int);
    int GetWeight()const { return itsWeight; }
    int GetAge() const { return itsAge; }
private:
int itsWeight;
int itsAge;
};

void setValue(Animal& theAnimal, int theWeight)
{
theAnimal.itsWeight = theWeight;
}

int main()
{
Animal peppy;
setValue(peppy,5);
return 0;
}