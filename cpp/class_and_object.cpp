class Student
{
    int marks[5];
    int total=0;
    public:
    void input(){
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    int calculateTotalScore(){
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        return total;
    }
    
};
