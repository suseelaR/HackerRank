class Rectangle {
public:
    int width, height; // Accessible to derived classes
public:
    void display() {
        cout << width << " " << height << endl;
    }
};
class RectangleArea:public Rectangle{
    
     public :
     void read_input(){
        
        cin>>width>>height;
    }
    void display()
    {
        
        cout<<width*height<<endl;
    }
};
