//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP3
//October 28, 2019

#define Sunflower_h

class Sunflower {
private:
    int numPetal;
    double stemLength;
public:
    Sunflower();
    Sunflower(int petal, double height);
    
    int getNumPetal();
    double getStemLength();
    
    void setNumPetal(int n);
    void setStemLength(double n);
    
    void display();
    void grow();
};
