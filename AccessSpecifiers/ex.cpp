#include <iostream>
using namespace std;
class Students{
    protected:
    char lnd[10] = "Gujart";
    private:
    int x;
    public:
    /* Students(int x)
    {
        this->x=x;
    } */
    void setX(int x)
    {
        this->x=x;
    }
    int getX()
    {
        return x;
    }
    void dis()
    {
        cout<<"X = "<<x<<endl; 
    }
};
class Add : public Students{
    public:
        void access()
        {
            cout<<lnd;
        }
};
int main()
{
    Students st,s2;
    Add o;
    o.access();
    st.setX(50);
    s2.setX(30);
    cout<<st.getX();
    cout<<s2.getX();
    return 0;
}