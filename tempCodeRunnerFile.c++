   base1()
    {
        cout<<"\n BASE 1 CLASS CONSTUCTOR";
    }
};
class base2 : public base1
{
    public:
    base2()
    {
        cout<<"\n BASE 2 CLASS CONSTUCTOR";
    }
};
class derived :public base2
{
    public:
    derived()
    {
        cout<<"\n DERIVED CLASS CONSTUCTOR";
    }