class Figure{
   public:
    Figure();
    virtual bool exist();
    virtual void move(char[8][8]);
    virtual char display();
    Figure operator=(Figure*);
   protected:
    int pos[2];
    bool color;
    int str;

};
class None: private Figure{
public:
    None(bool);
    void move();
    char display();
    bool exist();
};

class Pawn: public Figure{
public:
    Pawn(bool);
    void move();
    char display();
};

